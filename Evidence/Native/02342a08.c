/* IL2CPP: Dino.BusSand.App.Meta.LiveOps.<>c$$<FinalFail>b__14_0
void Dino_BusSand_App_Meta_LiveOps___c___FinalFail_b__14_0 (Dino_BusSand_App_Meta_LiveOps___c_o* __this, Dino_BusSand_App_Meta_ILiveFeature_o* f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps.<>c$$<FinalFail>b__14_0
   void Dino_BusSand_App_Meta_LiveOps___c___FinalFail_b__14_0 (Dino_BusSand_App_Meta_LiveOps___c_o*
   __this, Dino_BusSand_App_Meta_ILiveFeature_o* f, const MethodInfo* method); */

void Dino_BusSand_App_Meta_LiveOps___c___FinalFail_b__14_0_2242a08(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  if ((bRam0000000004f9bf14 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb37e8);
    bRam0000000004f9bf14 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar2 = *param_2;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_04cb37e8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 5) * 0x10 + 0x138);
        goto LAB_02342a90;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)PTR_DAT_04cb37e8,5);
LAB_02342a90:
                    /* WARNING: Could not recover jumptable at 0x02342aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_2,puVar1[1]);
  return;
}

