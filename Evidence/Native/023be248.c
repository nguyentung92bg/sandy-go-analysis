/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$Awake
void Dino_BusSand_App_UI_ContinueBottomPager__Awake (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$Awake
   void Dino_BusSand_App_UI_ContinueBottomPager__Awake (Dino_BusSand_App_UI_ContinueBottomPager_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPager__Awake_22be248(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c320 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caefb0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c320 = 1;
  }
  plVar5 = (long *)(param_1 + 0x38);
  lVar6 = *plVar5;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = UnityEngine_Component__GetComponent_object__26f97e8
                      (param_1,*(undefined8 *)PTR_DAT_04caefb0);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    thunk_FUN_02134474(plVar5,uVar3);
  }
  lVar6 = *plVar5;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*plVar5 != 0) {
    lVar6 = *(long *)puVar1;
    *(undefined1 *)(*plVar5 + 0x34) = 0;
    puVar7 = (undefined8 *)(param_1 + 0x40);
    uVar3 = *puVar7;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*plVar5 == 0) goto LAB_023be238;
      *puVar7 = *(undefined8 *)(*plVar5 + 0x20);
      thunk_FUN_02134474(puVar7);
    }
    plVar4 = (long *)(param_1 + 0x48);
    lVar6 = *plVar4;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*plVar5 != 0) {
      uVar3 = *(undefined8 *)(*plVar5 + 0x40);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
      lVar6 = *plVar5;
      if ((uVar2 & 1) == 0) {
        if (lVar6 != 0) {
          plVar5 = (long *)UnityEngine_Component__get_transform_43bcd18(lVar6,0);
          if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)PTR_DAT_04cabdb0)) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(plVar5,*(long *)PTR_DAT_04cabdb0);
          }
          goto code_r0x02132f28;
        }
      }
      else if (lVar6 != 0) {
        plVar5 = *(long **)(lVar6 + 0x40);
code_r0x02132f28:
        *plVar4 = (long)plVar5;
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)plVar4 >> 0xc & 0x3f),
                       ((ulong)plVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
    }
  }
LAB_023be238:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

