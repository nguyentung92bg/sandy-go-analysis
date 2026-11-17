/* IL2CPP: Dino.BusSand.App.UI.ScreenSafe$$get_Cutouts
UnityEngine_Rect_array* Dino_BusSand_App_UI_ScreenSafe__get_Cutouts (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenSafe$$get_Cutouts
   UnityEngine_Rect_array* Dino_BusSand_App_UI_ScreenSafe__get_Cutouts (const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_UI_ScreenSafe__get_Cutouts_21ff634(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  
  puVar2 = PTR_DAT_04cafcc0;
  if ((bRam0000000004f9bc84 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1b98);
    FUN_02132f7c(PTR_DAT_04cafcc0);
    bRam0000000004f9bc84 = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  pcVar8 = *(char **)(lVar5 + 0xb8);
  if (*(long *)(pcVar8 + 0x18) == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
      pcVar8 = *(char **)(lVar5 + 0xb8);
    }
    if (*pcVar8 == '\0') {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        pcVar8 = *(char **)(*(long *)puVar2 + 0xb8);
      }
      iVar1 = *(int *)(pcVar8 + 0x30);
      iVar3 = UnityEngine_Time__get_frameCount_43cd710(0);
      if (iVar1 != iVar3) {
        uVar4 = UnityEngine_Time__get_frameCount_43cd710(0);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar5);
          lVar5 = *(long *)puVar2;
        }
        *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x30) = uVar4;
        lVar5 = UnityEngine_Screen__get_cutouts_436a894(0);
        lVar6 = *(long *)puVar2;
        if (lVar5 == 0) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar2;
          }
          lVar5 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar2;
        }
        plVar7 = (long *)(*(long *)(lVar6 + 0xb8) + 0x28);
        *plVar7 = lVar5;
        thunk_FUN_02134474(plVar7,lVar5);
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      pcVar8 = (char *)(*(long *)(lVar5 + 0xb8) + 0x28);
    }
    else {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        pcVar8 = *(char **)(*(long *)puVar2 + 0xb8);
      }
      pcVar8 = pcVar8 + 0x20;
    }
  }
  else {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      pcVar8 = *(char **)(*(long *)puVar2 + 0xb8);
    }
    pcVar8 = pcVar8 + 0x18;
  }
  return *(undefined8 *)pcVar8;
}

