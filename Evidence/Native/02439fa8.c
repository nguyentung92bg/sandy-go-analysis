/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$<BuildTower>b__35_0
void Dino_BusSand_App_UI_WinStreakPanel___BuildTower_b__35_0 (Dino_BusSand_App_UI_WinStreakPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$<BuildTower>b__35_0
   void Dino_BusSand_App_UI_WinStreakPanel___BuildTower_b__35_0
   (Dino_BusSand_App_UI_WinStreakPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_WinStreakPanel___BuildTower_b__35_0_2339fa8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(char *)(param_1 + 0xb4) != '\0') {
    *(undefined1 *)(param_1 + 0xb5) = 1;
    return;
  }
  if ((bRam0000000004f9c64f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c64f = 1;
  }
  plVar4 = (long *)(param_1 + 0x80);
  lVar5 = *plVar4;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*plVar4 != 0) {
    uVar3 = UnityEngine_Component__get_gameObject_43bcde8(*plVar4,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar5);
    }
    UnityEngine_Object__Destroy_43c8114(uVar3,0);
    *plVar4 = 0;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)plVar4 >> 0xc & 0x3f),
                   ((ulong)plVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

