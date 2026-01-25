from django.db.models import Model, QuerySet, Q


def get_universities(University: Model) -> QuerySet:
    res = University.objects.filter(Q(students_count__lt=10) | Q(name__endswith='u'))
    return res