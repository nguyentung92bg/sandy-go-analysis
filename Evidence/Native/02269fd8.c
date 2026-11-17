/* IL2CPP: Dino.BusSand.App.GameApp$$SetVibration
void Dino_BusSand_App_GameApp__SetVibration (Dino_BusSand_App_GameApp_o* __this, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$SetVibration
   void Dino_BusSand_App_GameApp__SetVibration (Dino_BusSand_App_GameApp_o* __this, bool on, const
   MethodInfo* method); */

void Dino_BusSand_App_GameApp__SetVibration_2169fd8(undefined8 param_1,byte param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9b880 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab230);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9b880 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_04cab238;
  puVar2 = PTR_DAT_04cab230;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    param_2 = param_2 & 1;
    lVar5 = *(long *)PTR_DAT_04cab230;
    iVar1 = *(int *)(lVar5 + 0xe4);
    *(byte *)(lVar4 + 0x5a) = param_2;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    lVar4 = *(long *)puVar3;
    iVar1 = *(int *)(lVar4 + 0xe4);
    **(byte **)(lVar5 + 0xb8) = param_2;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac(lVar4);
      lVar4 = *(long *)puVar3;
    }
    **(byte **)(lVar4 + 0xb8) = param_2;
    puVar2 = PTR_DAT_04cabaf8;
    if ((bRam0000000004f9c0ee & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      bRam0000000004f9c0ee = 1;
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x28) = 1;
    fVar6 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2c) = fVar6 + 0.5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

