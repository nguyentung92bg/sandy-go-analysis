/* IL2CPP: Dino.BusSand.App.UI.TapRipple$$Update
void Dino_BusSand_App_UI_TapRipple__Update (Dino_BusSand_App_UI_TapRipple_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.TapRipple$$Update
   void Dino_BusSand_App_UI_TapRipple__Update (Dino_BusSand_App_UI_TapRipple_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_TapRipple__Update_228aa98
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 auStack_a0 [10];
  
  if ((bRam0000000004f9c175 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabca8);
    FUN_02132f7c(PTR_DAT_04cb5150);
    FUN_02132f7c(PTR_DAT_04cb5158);
    FUN_02132f7c(PTR_DAT_04cb5160);
    FUN_02132f7c(PTR_DAT_04cabcb8);
    FUN_02132f7c(PTR_DAT_04cb5168);
    FUN_02132f7c(PTR_DAT_04cabd90);
    FUN_02132f7c(PTR_DAT_04cabd98);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabcc0);
    bRam0000000004f9c175 = 1;
  }
  uVar4 = UnityEngine_Input__GetMouseButtonDown_443005c(0,0);
  puVar3 = PTR_DAT_04cabca8;
  puVar2 = PTR_DAT_04ca9ae8;
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cabca8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar10 = UnityEngine_Input__get_mousePosition_4430454(0);
  plVar8 = (long *)(param_3 + 0x28);
  if (*plVar8 != 0) {
    uVar5 = *(undefined8 *)(param_3 + 0x30);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,uVar6,0);
    if ((uVar4 & 1) == 0) goto LAB_0238ac68;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
  puVar9 = (undefined8 *)(param_3 + 0x30);
  *puVar9 = uVar5;
  thunk_FUN_02134474(puVar9,uVar5);
  uVar6 = *puVar9;
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cabcc0);
  UnityEngine_EventSystems_PointerEventData___ctor_46a11f8(uVar5,uVar6,0);
  *(undefined8 *)(param_3 + 0x28) = uVar5;
  thunk_FUN_02134474(plVar8,uVar5);
LAB_0238ac68:
  lVar7 = *plVar8;
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x104) = uVar10;
    *(undefined4 *)(lVar7 + 0x108) = param_2;
    lVar7 = *(long *)(param_3 + 0x20);
    if (lVar7 != 0) {
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar7 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
      if (lVar7 != 0) {
        UnityEngine_EventSystems_EventSystem__RaycastAll_46a2410
                  (lVar7,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x20),0);
        lVar7 = *(long *)(param_3 + 0x20);
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x18) != 0) {
            System_Collections_Generic_List_RaycastResult___get_Item_3a9f8e8
                      (auStack_a0,lVar7,0,*(undefined8 *)PTR_DAT_04cabd98);
            puVar3 = PTR_DAT_04cabcb8;
            if (*(int *)(*(long *)PTR_DAT_04cabcb8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar5 = UnityEngine_EventSystems_ExecuteEvents__GetEventHandler_object__2746948
                              (auStack_a0[0],*(undefined8 *)PTR_DAT_04cb5158);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar2);
            }
            uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
            if ((uVar4 & 1) == 0) {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar5 = UnityEngine_EventSystems_ExecuteEvents__GetEventHandler_object__2746948
                                (auStack_a0[0],*(undefined8 *)PTR_DAT_04cb5160);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
              if ((uVar4 & 1) == 0) {
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar5 = UnityEngine_EventSystems_ExecuteEvents__GetEventHandler_object__2746948
                                  (auStack_a0[0],*(undefined8 *)PTR_DAT_04cb5150);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar2);
                }
                uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
                if ((uVar4 & 1) == 0) {
                  Dino_BusSand_App_UI_TapRipple__Ripple_228ae1c(uVar10,param_2);
                }
              }
            }
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

