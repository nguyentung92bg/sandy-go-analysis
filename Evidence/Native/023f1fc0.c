/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Mood
void Dino_BusSand_App_UI_HomeToonFace__Mood (Dino_BusSand_App_UI_HomeToonFace_o* __this, Dino_BusSand_App_UI_HomeToonFace_Pose_o p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Mood
   void Dino_BusSand_App_UI_HomeToonFace__Mood (Dino_BusSand_App_UI_HomeToonFace_o* __this,
   Dino_BusSand_App_UI_HomeToonFace_Pose_o p, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonFace__Mood_22f1fc0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  puVar1 = PTR_DAT_04cb71a8;
  if ((bRam0000000004f9c46f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71a8);
    bRam0000000004f9c46f = 1;
  }
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = *(undefined4 *)(param_2 + 2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_UI_HomeToonFace__Pack_22f1a18(&uStack_50);
  puVar3 = (undefined8 *)(param_1 + 0x38);
  *puVar3 = uVar2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

