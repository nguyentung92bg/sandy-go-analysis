/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$ApplyDots
void Dino_BusSand_App_UI_ContinueBottomPanel__ApplyDots (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, int32_t page, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$ApplyDots
   void Dino_BusSand_App_UI_ContinueBottomPanel__ApplyDots
   (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, int32_t page, const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPanel__ApplyDots_22c1c88(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  
  if ((bRam0000000004f9c335 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae8a0);
    FUN_02132f7c(PTR_DAT_04cae8b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c335 = 1;
  }
  puVar2 = PTR_DAT_04cae8b8;
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar6) {
        return;
      }
      uVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar3,iVar6,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(param_1 + 0x40) == 0) ||
           (lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                              (*(long *)(param_1 + 0x40),iVar6,*(undefined8 *)puVar2), lVar3 == 0))
        break;
        uVar5 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar3,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(param_1 + 0x40) == 0) break;
          uVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                            (*(long *)(param_1 + 0x40),iVar6,*(undefined8 *)puVar2);
          Dino_BusSand_App_UI_ContinueBottomPanel__SetDot_22c1b30(uVar4,param_2 == iVar6);
        }
      }
      lVar3 = *(long *)(param_1 + 0x40);
      iVar6 = iVar6 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

