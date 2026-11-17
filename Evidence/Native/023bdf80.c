/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$get_PageCount
int32_t Dino_BusSand_App_UI_ContinueBottomPager__get_PageCount (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$get_PageCount
   int32_t Dino_BusSand_App_UI_ContinueBottomPager__get_PageCount
   (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, const MethodInfo* method); */

int Dino_BusSand_App_UI_ContinueBottomPager__get_PageCount_22bdf80(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c31f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c31f = 1;
  }
  Dino_BusSand_App_UI_ContinueBottomPager__EnsureRefs_22be060(param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 != 0) {
    iVar6 = 0;
    iVar8 = 0;
    do {
      iVar2 = UnityEngine_Transform__get_childCount_43d4480(lVar5,0);
      if (iVar2 <= iVar8) {
        return iVar6;
      }
      if (((*(long *)(param_1 + 0x40) == 0) ||
          (lVar5 = UnityEngine_Transform__GetChild_43d5294(*(long *)(param_1 + 0x40),iVar8,0),
          lVar5 == 0)) ||
         (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0), lVar5 == 0)) break;
      uVar3 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar5,0);
      lVar5 = *(long *)(param_1 + 0x40);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + (uVar3 & 1);
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

