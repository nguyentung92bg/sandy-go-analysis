/* IL2CPP: Dino.BusSand.App.Meta.LiveOps.<>c__DisplayClass12_0$$<LevelStart>b__0
void Dino_BusSand_App_Meta_LiveOps___c__DisplayClass12_0___LevelStart_b__0 (Dino_BusSand_App_Meta_LiveOps___c__DisplayClass12_0_o* __this, Dino_BusSand_App_Meta_ILiveFeature_o* f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps.<>c__DisplayClass12_0$$<LevelStart>b__0
   void Dino_BusSand_App_Meta_LiveOps___c__DisplayClass12_0___LevelStart_b__0
   (Dino_BusSand_App_Meta_LiveOps___c__DisplayClass12_0_o* __this,
   Dino_BusSand_App_Meta_ILiveFeature_o* f, const MethodInfo* method); */

void Dino_BusSand_App_Meta_LiveOps___c__DisplayClass12_0___LevelStart_b__0_2242be8
               (long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000004f9bf17 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb37e8);
    bRam0000000004f9bf17 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar3 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_04cb37e8) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_02342c78;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)PTR_DAT_04cb37e8,3);
LAB_02342c78:
                    /* WARNING: Could not recover jumptable at 0x02342c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2,uVar1,puVar2[1]);
  return;
}

