/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$TypeOk
bool Dino_BusSand_App_Meta_TrackingPlan__TypeOk (Il2CppObject* v, int32_t t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$TypeOk
   bool Dino_BusSand_App_Meta_TrackingPlan__TypeOk (Il2CppObject* v, int32_t t, const MethodInfo*
   method); */

bool Dino_BusSand_App_Meta_TrackingPlan__TypeOk_22766e0(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == 1) {
    if (param_1 == (long *)0x0) {
      return false;
    }
    lVar2 = *param_1;
    if (lVar2 == *(long *)(PTR_DAT_04ca9ac8 + 0x48)) {
      return true;
    }
  }
  else {
    if (param_2 == 0) {
      if (param_1 == (long *)0x0) {
        return false;
      }
      lVar2 = *param_1;
      lVar1 = *(long *)(PTR_DAT_04ca9ac8 + 0x90);
      goto LAB_02376764;
    }
    if (param_1 == (long *)0x0) {
      return false;
    }
    lVar2 = *param_1;
    if (lVar2 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
      return true;
    }
    if (lVar2 == *(long *)(PTR_DAT_04ca9ac8 + 0x78)) {
      return true;
    }
    if (lVar2 == *(long *)(PTR_DAT_04ca9ac8 + 0x48)) {
      return true;
    }
  }
  lVar1 = *(long *)(PTR_DAT_04ca9ac8 + 0x68);
LAB_02376764:
  return lVar2 == lVar1;
}

