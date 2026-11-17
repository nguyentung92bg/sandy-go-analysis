/* IL2CPP: Dino.BusSand.Core.Lane$$get_CutDistance
double Dino_BusSand_Core_Lane__get_CutDistance (Dino_BusSand_Core_Lane_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Lane$$get_CutDistance
   double Dino_BusSand_Core_Lane__get_CutDistance (Dino_BusSand_Core_Lane_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_Core_Lane__get_CutDistance_242f1fc(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9cc06 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbef60);
    bRam0000000004f9cc06 = 1;
  }
  uStack_28 = 0;
  uStack_58 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  dVar9 = (double)Dino_BusSand_Core_Lane__get_RequiredLength_242f034(param_1);
  if ((0.0 < dVar9) && (-1 < *(int *)(param_1 + 0x30))) {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (1 < *(int *)(*(long *)(param_1 + 0x18) + 0x18)) {
      dVar10 = (double)Dino_BusSand_Core_Lane__get_PathLength_242eefc(param_1);
      Dino_BusSand_Core_Lane__OccupantCenter_242f388
                (param_1,*(undefined4 *)(param_1 + 0x34),&uStack_28,&uStack_58);
      uVar6 = uStack_28;
      uVar3 = uStack_58;
      puVar5 = PTR_DAT_04cbc080;
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Core_BusGeometry__Make_242bfa4(&uStack_90,uVar6,uVar3,uVar1,uVar2,0);
      dVar4 = _UNK_00e6a8b8;
      uVar3 = _UNK_00e6a330;
      if (dVar9 < dVar10) {
        uVar8 = 0;
        while( true ) {
          uVar6 = Dino_BusSand_Core_Lane__PathTail_242f4a8(dVar9,param_1);
          uVar7 = Dino_BusSand_Core_Lane__TryEndCap_242f7dc(uVar6,&uStack_c0);
          if ((uVar7 & 1) == 0) break;
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = Dino_BusSand_Core_BusGeometry__Overlaps_242c220(uVar3,&uStack_c0,&uStack_90,0);
          if ((((uVar7 & 1) == 0) || (dVar9 = dVar9 + dVar4, 0x3e < uVar8)) ||
             (uVar8 = uVar8 + 1, dVar10 <= dVar9)) break;
        }
      }
    }
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar9;
  return auVar11;
}

