/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$get_CapAway
bool Dino_BusSand_App_UI_HomeToonRig__get_CapAway (Dino_BusSand_App_UI_HomeToonRig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$get_CapAway
   bool Dino_BusSand_App_UI_HomeToonRig__get_CapAway (Dino_BusSand_App_UI_HomeToonRig_o* __this,
   const MethodInfo* method); */

bool Dino_BusSand_App_UI_HomeToonRig__get_CapAway_22f63a4(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c487 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c487 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar3 & 1) == 0) {
    bVar2 = false;
  }
  else if (*(char *)(param_1 + 200) == '\0') {
    bVar2 = 0.0 <= *(float *)(param_1 + 0xbc);
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

