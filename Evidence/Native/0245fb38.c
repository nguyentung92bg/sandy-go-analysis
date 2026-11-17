/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$OnGUI
void Dino_BusSand_Cheat_CheatManager__OnGUI (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$OnGUI
   void Dino_BusSand_Cheat_CheatManager__OnGUI (Dino_BusSand_Cheat_CheatManager_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__OnGUI_235fb38(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 in_s3;
  float fVar6;
  float fVar7;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04cba548;
  if ((bRam0000000004f9c73e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba548);
    bRam0000000004f9c73e = 1;
  }
  Dino_BusSand_Cheat_CheatManager__EnsureStyles_235f3b8(param_1);
  UnityEngine_Matrix4x4__Scale_43ad0b8
            (&uStack_70,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x84),0x3f800000,0
            );
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_a8 = uStack_68;
  uStack_b0 = uStack_70;
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_78 = uStack_38;
  uStack_80 = uStack_40;
  UnityEngine_GUI__set_matrix_4407d0c(&uStack_b0,0);
  uVar5 = (undefined4)uStack_40;
  iVar2 = UnityEngine_Screen__get_height_436a6c8(0);
  fVar6 = (float)iVar2 / *(float *)(param_1 + 0x84);
  iVar2 = UnityEngine_Screen__get_width_436a6a0(0);
  fVar4 = *(float *)(param_1 + 0x84);
  fVar7 = (float)iVar2 / fVar4;
  if (*(char *)(param_1 + 0x120) == '\0') {
    uVar3 = UnityEngine_Rect__get_zero_4365fe0(0);
    *(undefined4 *)(param_1 + 0x88) = uVar3;
    *(float *)(param_1 + 0x8c) = fVar4;
    *(undefined4 *)(param_1 + 0x90) = uVar5;
    *(undefined4 *)(param_1 + 0x94) = in_s3;
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  else {
    Dino_BusSand_Cheat_CheatManager__DrawPanel_235fc7c(fVar7,fVar6,param_1);
  }
  if (*(char *)(param_1 + 0x121) != '\0') {
    Dino_BusSand_Cheat_CheatManager__DrawJumpBox_23622f0(fVar7,fVar6,param_1);
  }
  if (*(char *)(param_1 + 0x122) != '\0') {
    Dino_BusSand_Cheat_CheatManager__DrawConfirm_2362570(fVar7,fVar6,param_1);
  }
  Dino_BusSand_Cheat_CheatManager__DrawToasts_23629a8(fVar7,fVar6,param_1);
  if (*(char *)(param_1 + 0x158) != '\0') {
    Dino_BusSand_Cheat_CheatManager__DrawFps_2362ca0(param_1);
  }
  return;
}

