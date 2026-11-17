/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$ParseSpeed
Dino_BusSand_App_Meta_RacingSpeedParams_o Dino_BusSand_App_Meta_RacingRobotParser__ParseSpeed (System_String_o* raw, System_Random_o* rng, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$ParseSpeed
   Dino_BusSand_App_Meta_RacingSpeedParams_o Dino_BusSand_App_Meta_RacingRobotParser__ParseSpeed
   (System_String_o* raw, System_Random_o* rng, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotParser__ParseSpeed_225dd68
               (ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong auStack_68 [2];
  uint uStack_54;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9c027 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cae4f8);
    FUN_02132f7c(PTR_DAT_04cb2090);
                    /* try { // try from 0235ddbc to 0245dfe7 has its CatchHandler @ 0235ddbc
                       catch() { ... } // from try @ 0235ddbc with catch @ 0235ddbc
                       catch() { ... } // from try @ 0235e074 with catch @ 0235ddbc
                       catch() { ... } // from try @ 0235e0b4 with catch @ 0235ddbc
                       catch() { ... } // from try @ 0235e174 with catch @ 0235ddbc */
    bRam0000000004f9c027 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_54 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  auStack_68[0] = 0;
  uStack_70 = 0;
  Dino_BusSand_App_Meta_RacingRobotParser__SplitModeContent_225dfc0(param_2,&uStack_48,&uStack_50);
  uVar2 = System_Int32__TryParse_482de64(uStack_48,&uStack_54,0);
  if ((uVar2 & 1) == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0x4270000000000001;
    param_1[1] = 0;
    return;
  }
  uStack_70 = 0;
  auStack_68[0] = 0;
  uStack_78 = 0;
  uStack_80 = (ulong)uStack_54;
  if (1 < uStack_54 - 3) {
    if (uStack_54 != 2) {
      if (uStack_54 == 1) {
        if (uStack_50 == 0) goto LAB_0235dfb8;
        uVar2 = System_String__Contains_46d726c(uStack_50,*(undefined8 *)PTR_DAT_04cae4f8,0);
        if ((uVar2 & 1) != 0) {
          if ((uStack_50 == 0) ||
             (lVar3 = System_String__TrimStart_46d71b0(uStack_50,0), lVar3 == 0)) {
LAB_0235dfb8:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar2 = System_String__StartsWith_46d117c(lVar3,*(undefined8 *)PTR_DAT_04cb2090,0);
          if ((uVar2 & 1) == 0) {
            if ((uStack_50 != 0) &&
               (lVar3 = System_String__Split_46d50c0(uStack_50,0x2c,0,0), lVar3 != 0)) {
              auStack_68[0] =
                   FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,*(undefined4 *)(lVar3 + 0x18));
              thunk_FUN_02134474(auStack_68,auStack_68[0]);
              uVar1 = *(uint *)(lVar3 + 0x18);
              if (0 < (int)uVar1) {
                lVar6 = 0;
                do {
                  uVar2 = auStack_68[0];
                  if (uVar1 <= (uint)lVar6) {
LAB_0235dfbc:
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  lVar4 = *(long *)(lVar3 + 0x20 + lVar6 * 8);
                  if (lVar4 == 0) goto LAB_0235dfb8;
                  uVar5 = System_String__Trim_46d6ee0(lVar4,0);
                  uVar7 = Dino_BusSand_App_Meta_RacingRobotParser__ParseFloat_225e0dc
                                    (0x42700000,uVar5,param_3);
                  if (uVar2 == 0) goto LAB_0235dfb8;
                  if (*(uint *)(uVar2 + 0x18) <= (uint)lVar6) goto LAB_0235dfbc;
                  uVar1 = *(uint *)(lVar3 + 0x18);
                  lVar4 = lVar6 * 4;
                  lVar6 = lVar6 + 1;
                  *(undefined4 *)(uVar2 + lVar4 + 0x20) = uVar7;
                } while ((int)lVar6 < (int)uVar1);
              }
              goto LAB_0235dee4;
            }
            goto LAB_0235dfb8;
          }
        }
        uVar7 = Dino_BusSand_App_Meta_RacingRobotParser__ParseFloat_225e0dc
                          (0x42700000,uStack_50,param_3);
        uStack_80 = CONCAT44(uVar7,(undefined4)uStack_80);
      }
      else {
        uStack_80 = 0x4270000000000001;
      }
      goto LAB_0235dee4;
    }
    uVar2 = Dino_BusSand_App_Meta_RacingRobotParser__TryParseRange_225e1a8
                      (uStack_50,(long)&uStack_88 + 4,&uStack_88);
    if ((uVar2 & 1) != 0) {
      uStack_78 = CONCAT44((undefined4)uStack_88,uStack_88._4_4_);
      goto LAB_0235dee4;
    }
  }
  uStack_70 = uStack_50;
  thunk_FUN_02134474(&uStack_70);
LAB_0235dee4:
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = auStack_68[0];
  param_1[2] = uStack_70;
  return;
}

