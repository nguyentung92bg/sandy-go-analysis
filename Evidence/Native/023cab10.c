/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$RestoreRaised
void Dino_BusSand_App_UI_GuidePanel__RestoreRaised (Dino_BusSand_App_UI_GuidePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$RestoreRaised
   void Dino_BusSand_App_UI_GuidePanel__RestoreRaised (Dino_BusSand_App_UI_GuidePanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__RestoreRaised_22cab10(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c377 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c377 = 1;
  }
  Dino_BusSand_App_UI_GuidePanel__RestoreExtra_22caa10(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0xe0);
    if (*(char *)(param_1 + 0xe8) == '\0') {
      if (lVar4 != 0) {
        UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar4,*(undefined1 *)(param_1 + 0xe9),0);
        if (*(long *)(param_1 + 0xe0) != 0) {
          UnityEngine_Canvas__set_sortingOrder_46800e4
                    (*(long *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xec),0);
          goto LAB_023cabd0;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8114(lVar4,0);
  }
LAB_023cabd0:
  *(undefined8 *)(param_1 + 0xe0) = 0;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0xe0),0);
  *(undefined1 *)(param_1 + 0xe8) = 0;
  return;
}

