/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$ParseHangup
Dino_BusSand_App_Meta_RacingHangupParams_o Dino_BusSand_App_Meta_RacingRobotParser__ParseHangup (System_String_o* raw, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$ParseHangup
   Dino_BusSand_App_Meta_RacingHangupParams_o Dino_BusSand_App_Meta_RacingRobotParser__ParseHangup
   (System_String_o* raw, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_RacingRobotParser__ParseHangup_225eab4(undefined8 param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong uVar3;
  float fVar4;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_1c;
  undefined8 uStack_18;
  undefined8 uStack_8;
  
  uStack_8 = 0;
  uStack_18 = 0;
  iStack_1c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  Dino_BusSand_App_Meta_RacingRobotParser__SplitModeContent_225dfc0(param_1,&uStack_8,&uStack_18);
  uVar3 = System_Int32__TryParse_482de64(uStack_8,&iStack_1c,0);
  if ((uVar3 & 1) == 0) {
    iStack_1c = 1;
  }
  iVar2 = iStack_1c;
  uStack_24 = 0;
  iStack_2c = 0;
  uStack_28 = 0;
  if (iStack_1c == 1) {
    fVar4 = (float)Dino_BusSand_App_Meta_RacingRobotParser__ParseFloat_225e0dc(0,uStack_18,0);
    iStack_2c = -0x80000000;
    if (fVar4 != INFINITY) {
      iStack_2c = (int)fVar4;
    }
  }
  else {
    uStack_28 = (undefined4)uStack_18;
    uStack_24 = (undefined4)((ulong)uStack_18 >> 0x20);
    thunk_FUN_02134474(&uStack_28);
  }
  auVar1._4_4_ = iStack_2c;
  auVar1._0_4_ = iVar2;
  auVar1._8_4_ = uStack_28;
  auVar1._12_4_ = uStack_24;
  return auVar1;
}

