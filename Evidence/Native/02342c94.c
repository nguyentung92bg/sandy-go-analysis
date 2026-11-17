/* IL2CPP: Dino.BusSand.App.Meta.LiveOps.<>c__DisplayClass13_0$$<LevelWin>b__0
void Dino_BusSand_App_Meta_LiveOps___c__DisplayClass13_0___LevelWin_b__0 (Dino_BusSand_App_Meta_LiveOps___c__DisplayClass13_0_o* __this, Dino_BusSand_App_Meta_ILiveFeature_o* f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps.<>c__DisplayClass13_0$$<LevelWin>b__0
   void Dino_BusSand_App_Meta_LiveOps___c__DisplayClass13_0___LevelWin_b__0
   (Dino_BusSand_App_Meta_LiveOps___c__DisplayClass13_0_o* __this,
   Dino_BusSand_App_Meta_ILiveFeature_o* f, const MethodInfo* method); */

void Dino_BusSand_App_Meta_LiveOps___c__DisplayClass13_0___LevelWin_b__0_2242c94
               (long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam0000000004f9bf18 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb37e8);
    bRam0000000004f9bf18 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04cb37e8) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_02342d24;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)PTR_DAT_04cb37e8,4);
LAB_02342d24:
                    /* WARNING: Could not recover jumptable at 0x02342d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_2,uVar1,uVar2,puVar3[1]);
  return;
}

