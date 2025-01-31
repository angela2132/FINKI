# Задача 2

Преголемо прилагодување (overfitting) претставува грешка на моделирање која се случува кога дадена функција е премногу прилагодена на лимитирано множество на податочни инстанци. Преголемото прилагодување на моделот најчесто се појавува кога имаме изградено прекомплексен модел за да се моделираат податоците кои ги проучуваме.

Дадено е податочно множество за класификација на соларните сигнали. Задачата е да се истренира невронска мрежа која ќе ги разликува соларните сигнали одбиени од метален цилиндар и оние одбиени од цилиндрични карпи. Податочното множество се состои од 15 карактеристики и две класи. Невронската мрежа потребно е да содржи 6 неврони во скриениот слој, активирани со tanh активациската функција. Бројот на епохи (epoch_num) и ратата на учење (learning_rate) потребни за тренирање на мрежата се читаат од стандарден влез.

Податочното множество поделете го на множество за тренирање и множество за валидација, во сооднос 80% : 20% од секоја од класите, односно првите 80% од конкретна класа влегуваат во тренирачкото множество, а следните 20% се дел од валидациското множество.

Потребно е да се детектира дали со зададените параметри за тренирање на моделот на невронска мрежа се случува преголемо прилагодување (overfitting) на мрежата спрема тренирачкото множество. Доколку точноста која се добива со тренирачкото множество е поголема за 15% од точноста добиена со валидациско множество, тогаш детектираме дека моделот прави overfitting, односно премногу се прилагодува кон тренирачкото множество. Точноста на моделот со дадено множество се пресметува преку формулата accuracy=predicted_correct/total, каде што predicted_correct претставува број на точно предвидени инстанци, додека total е број на сите инстанци во множеството (точно и неточно предвидени).

Потребно е на стандарден излез да се испечати дали се случува overfitting или не, по што се печати точноста добиена со тренирачкото множество и точноста со валидациското множество.