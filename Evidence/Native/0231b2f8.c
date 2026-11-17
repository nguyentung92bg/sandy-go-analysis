/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$get_NowMs
int64_t Dino_BusSand_App_Meta_JourneyTracking__get_NowMs (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$get_NowMs
   int64_t Dino_BusSand_App_Meta_JourneyTracking__get_NowMs (const MethodInfo* method); */

long Dino_BusSand_App_Meta_JourneyTracking__get_NowMs_221b2f8(void)

{
  long lVar1;
  double dVar2;
  
  dVar2 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
  lVar1 = -0x8000000000000000;
  if (dVar2 * _UNK_00e6a6f0 != INFINITY) {
    lVar1 = (long)(dVar2 * _UNK_00e6a6f0);
  }
  return lVar1;
}

