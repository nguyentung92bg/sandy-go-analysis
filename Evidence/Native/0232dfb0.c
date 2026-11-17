/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$.ctor
void Dino_BusSand_App_Meta_DailyChallengeModel___ctor (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, Dino_BusSand_App_Meta_DailyChallengeData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$.ctor
   void Dino_BusSand_App_Meta_DailyChallengeModel___ctor
   (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, Dino_BusSand_App_Meta_DailyChallengeData_o*
   data, const MethodInfo* method); */

void Dino_BusSand_App_Meta_DailyChallengeModel___ctor_222dfb0(long param_1,long param_2)

{
  long *plVar1;
  
  if ((bRam0000000004f9be4f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2ee8);
    bRam0000000004f9be4f = 1;
  }
  System_Object___ctor_4870e5c(param_1,0);
  if (param_2 == 0) {
    param_2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2ee8);
    Dino_BusSand_App_Meta_DailyChallengeData___ctor_222defc();
  }
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 0x10);
    *plVar1 = param_2;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)plVar1 >> 0xc & 0x3f),
                   ((ulong)plVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

