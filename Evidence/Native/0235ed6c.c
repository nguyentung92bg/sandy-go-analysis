/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$.ctor
void Dino_BusSand_App_Meta_RacingRobotAgent___ctor (Dino_BusSand_App_Meta_RacingRobotAgent_o* __this, Dino_BusSand_App_Meta_RacingRobotConfig_o* cfg, int32_t totalLevels, float userScore, float score, System_Random_o* rng, int32_t initialProgress, float overrideSpeedSeconds, float stage1Score, float stage2Score, float stage3Score, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$.ctor
   void Dino_BusSand_App_Meta_RacingRobotAgent___ctor (Dino_BusSand_App_Meta_RacingRobotAgent_o*
   __this, Dino_BusSand_App_Meta_RacingRobotConfig_o* cfg, int32_t totalLevels, float userScore,
   float score, System_Random_o* rng, int32_t initialProgress, float overrideSpeedSeconds, float
   stage1Score, float stage2Score, float stage3Score, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotAgent___ctor_225ed6c
               (undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7,long param_8,undefined4 param_9,
               long param_10,undefined4 param_11)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined4 uStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if ((bRam0000000004f9c02e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4368);
    FUN_02132f7c(PTR_DAT_04cb4360);
    FUN_02132f7c(PTR_DAT_04cae330);
    bRam0000000004f9c02e = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  *(undefined4 *)(param_7 + 0x98) = 0xffffffff;
  System_Object___ctor_4870e5c(param_7,0);
  *(long *)(param_7 + 0x10) = param_8;
  thunk_FUN_02134474((long *)(param_7 + 0x10),param_8);
  *(undefined4 *)(param_7 + 0x18) = param_9;
  *(undefined4 *)(param_7 + 0x1c) = param_1;
  if (param_10 == 0) {
    param_10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae330);
    System_Random___ctor_4840a9c(param_10,0);
  }
  plVar4 = (long *)(param_7 + 0x88);
  *plVar4 = param_10;
  thunk_FUN_02134474(plVar4,param_10);
  *(undefined4 *)(param_7 + 0xa8) = param_2;
  *(undefined4 *)(param_7 + 0x9c) = param_11;
  *(float *)(param_7 + 0xb0) = param_3;
  *(undefined4 *)(param_7 + 0x20) = param_4;
  *(undefined4 *)(param_7 + 0x24) = param_5;
  *(undefined4 *)(param_7 + 0x28) = param_6;
  if (param_8 != 0) {
    if (*(int *)(param_8 + 0x14) == 3) {
      Dino_BusSand_App_Meta_RacingRobotParser__ParseChase_225e364
                (&uStack_b8,*(undefined8 *)(param_8 + 0x18),*(undefined8 *)(param_8 + 0x20));
      *(undefined8 *)(param_7 + 0x58) = uStack_b0;
      *(ulong *)(param_7 + 0x50) = CONCAT44(fStack_b4,uStack_b8);
      *(undefined8 *)(param_7 + 0x68) = uStack_a0;
      *(undefined8 *)(param_7 + 0x60) = uStack_a8;
      *(undefined8 *)(param_7 + 0x70) = uStack_98;
      thunk_FUN_02134474(param_7 + 0x60,0);
      uVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4360);
      System_Collections_Generic_List_RacingFailRule____ctor_3a9786c
                (uVar2,*(undefined8 *)PTR_DAT_04cb4368);
      *(undefined8 *)(param_7 + 0x78) = uVar2;
    }
    else {
      if (param_3 <= 0.0) {
        Dino_BusSand_App_Meta_RacingRobotParser__ParseSpeed_225dd68
                  (&uStack_b8,*(undefined8 *)(param_8 + 0x18),*plVar4);
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        uStack_80 = uStack_a0;
        param_3 = fStack_b4;
      }
      else {
        uStack_b8 = 1;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
      }
      *(undefined4 *)(param_7 + 0x30) = uStack_b8;
      *(float *)(param_7 + 0x34) = param_3;
      *(undefined8 *)(param_7 + 0x40) = uStack_88;
      *(undefined8 *)(param_7 + 0x38) = uStack_90;
      *(undefined8 *)(param_7 + 0x48) = uStack_80;
      thunk_FUN_02134474(param_7 + 0x40,0);
      uVar2 = Dino_BusSand_App_Meta_RacingRobotParser__ParseFailRate_225e5c8
                        (*(undefined8 *)(param_8 + 0x20));
      *(undefined8 *)(param_7 + 0x78) = uVar2;
    }
    thunk_FUN_02134474(param_7 + 0x78,uVar2);
    auVar6 = Dino_BusSand_App_Meta_RacingRobotParser__ParseHangup_225eab4
                       (*(undefined8 *)(param_8 + 0x28));
    if (auVar6._0_4_ == 1) {
      iVar1 = auVar6._4_4_;
    }
    else {
      iVar1 = Dino_BusSand_App_Meta_RacingRobotParser__EvalHangupFormula_225eb60
                        (param_1,auVar6._8_8_,*plVar4);
    }
    *(int *)(param_7 + 0x80) = iVar1;
    if (iVar1 < 1) {
      if (*(int *)(param_8 + 0x14) == 3) {
        bVar3 = 0.0 < *(float *)(param_7 + 0x58);
      }
      else {
        bVar3 = true;
      }
    }
    else {
      bVar3 = false;
    }
    *(bool *)(param_7 + 0xa4) = bVar3;
    uVar5 = Dino_BusSand_App_Meta_RacingRobotAgent__CalcRequiredSeconds_225eff8
                      (param_7,*(undefined4 *)(param_7 + 0x9c));
    *(undefined4 *)(param_7 + 0x94) = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

