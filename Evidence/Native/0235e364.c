/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$ParseChase
Dino_BusSand_App_Meta_RacingChaseParams_o Dino_BusSand_App_Meta_RacingRobotParser__ParseChase (System_String_o* speedRaw, System_String_o* failRaw, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$ParseChase
   Dino_BusSand_App_Meta_RacingChaseParams_o Dino_BusSand_App_Meta_RacingRobotParser__ParseChase
   (System_String_o* speedRaw, System_String_o* failRaw, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotParser__ParseChase_225e364
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  int iStack_34;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = 0;
  uStack_28 = 0;
  iStack_34 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  lStack_50 = 0;
  uStack_68 = 0;
  uStack_6c = 0;
  Dino_BusSand_App_Meta_RacingRobotParser__SplitModeContent_225dfc0(param_2,&uStack_28,&lStack_30);
  uVar2 = System_Int32__TryParse_482de64(uStack_28,&iStack_34,0);
  puVar5 = (undefined8 *)((ulong)&uStack_60 | 4);
  if ((uVar2 & 1) == 0) {
    *(undefined4 *)(puVar5 + 4) = 0;
    iStack_34 = 1;
    uStack_60 = CONCAT44(uStack_60._4_4_,1);
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
LAB_0235e3fc:
    uVar2 = Dino_BusSand_App_Meta_RacingRobotParser__TryParseRange_225e1a8
                      (lStack_30,&uStack_68,&uStack_6c);
    if ((uVar2 & 1) != 0) {
      uStack_60 = CONCAT44((undefined4)uStack_68,(undefined4)uStack_60);
      uStack_58 = CONCAT44(uStack_58._4_4_,uStack_6c);
    }
  }
  else {
    *(undefined4 *)(puVar5 + 4) = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,iStack_34);
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    if (iStack_34 == 2) {
      iVar1 = Dino_BusSand_App_Meta_RacingRobotParser__FindOuterComma_225e520(lStack_30);
      if (iVar1 < 0) {
        lStack_50 = lStack_30;
        thunk_FUN_02134474(&lStack_50);
        lStack_48 = lStack_30;
      }
      else {
        if ((lStack_30 == 0) ||
           (lVar3 = System_String__Substring_46d4848(lStack_30,0,iVar1,0), lVar3 == 0))
        goto LAB_0235e51c;
        lStack_50 = System_String__Trim_46d6ee0(lVar3,0);
        thunk_FUN_02134474(&lStack_50,lStack_50);
        if ((lStack_30 == 0) ||
           (lVar3 = System_String__Substring_46d6a94(lStack_30,iVar1 + 1,0), lVar3 == 0))
        goto LAB_0235e51c;
        lStack_48 = System_String__Trim_46d6ee0(lVar3,0);
      }
      thunk_FUN_02134474(&lStack_48,lStack_48);
    }
    else if (iStack_34 == 1) goto LAB_0235e3fc;
  }
  uStack_40 = CONCAT44(uStack_40._4_4_,1);
  uVar2 = System_String__IsNullOrWhiteSpace_46d20a0(param_3,0);
  if ((uVar2 & 1) == 0) {
    if (param_3 == 0) {
LAB_0235e51c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = System_String__Trim_46d6ee0(param_3,0);
    uVar2 = System_Int32__TryParse_482de64(uVar4,(long)&uStack_68 + 4,0);
    if ((uVar2 & 1) != 0) {
      uStack_40 = CONCAT44(uStack_40._4_4_,uStack_68._4_4_);
    }
  }
  param_1[4] = uStack_40;
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[3] = lStack_48;
  param_1[2] = lStack_50;
  return;
}

