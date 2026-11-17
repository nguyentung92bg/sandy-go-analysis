/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$OnPointerDown
void Dino_BusSand_App_UI_GuidePanel__OnPointerDown (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_EventSystems_PointerEventData_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$OnPointerDown
   void Dino_BusSand_App_UI_GuidePanel__OnPointerDown (Dino_BusSand_App_UI_GuidePanel_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* e, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_GuidePanel__OnPointerDown_22cc888(ulong param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  uVar4 = param_1;
  if ((bRam0000000004f9c384 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6ae0);
    FUN_02132f7c(PTR_DAT_04cabcb8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    uVar4 = FUN_02132f7c(PTR_DAT_04cabda8);
    bRam0000000004f9c384 = 1;
  }
  *(undefined1 *)(param_1 + 0xf8) = 0;
  puVar2 = PTR_DAT_04ca9ae8;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x4c) == 2)) {
    if (*(long *)(param_1 + 0x38) == 0) {
LAB_023cca24:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(*(long *)(param_1 + 0x38) + 0x44) != 0) {
      uVar12 = *(undefined8 *)(param_1 + 0xd8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
      if ((uVar4 & 1) == 0) {
        uVar12 = *(undefined8 *)(param_1 + 0xf0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
        if ((uVar4 & 1) == 0) {
          uVar12 = *(undefined8 *)(param_1 + 0xd8);
          uVar16 = *(undefined4 *)(param_2 + 0x104);
          uVar17 = *(undefined4 *)(param_2 + 0x108);
          uVar13 = *(undefined8 *)(param_1 + 0x50);
          if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint_467e02c
                            (uVar16,uVar17,uVar12,uVar13,0);
          if ((uVar4 & 1) != 0) {
            *(undefined1 *)(param_1 + 0xf8) = 1;
            if (*(long *)(param_1 + 0xf0) != 0) {
              uVar12 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xf0),0);
              if (*(int *)(*(long *)PTR_DAT_04cabcb8 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabcb8);
              }
              lVar5 = FUN_023d0bec(0);
              lVar10 = *(long *)PTR_DAT_04cb6ae0;
              if (*(long *)(lVar10 + 0x38) == 0) {
                FUN_02132f7c(PTR_DAT_04cc4458);
                FUN_02132f7c(PTR_DAT_04cc4460);
                FUN_02132f7c(PTR_DAT_04cc4468);
                FUN_02132f7c(PTR_DAT_04cabcb8);
                FUN_02132f7c(PTR_DAT_04cc4470);
                FUN_02132f7c(PTR_DAT_04cc4478);
                if (*(long *)(lVar10 + 0x38) == 0) {
                  FUN_0216b4cc(lVar10);
                }
              }
              puVar2 = PTR_DAT_04cc4468;
              if (*(int *)(*(long *)PTR_DAT_04cc4468 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar6 = UnityEngine_Pool_CollectionPool_object__object___Get_32ba63c
                                (*(undefined8 *)PTR_DAT_04cc4458);
              if (*(int *)(*(long *)PTR_DAT_04cabcb8 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabcb8);
              }
              UnityEngine_EventSystems_ExecuteEvents__GetEventList_object__2746ba4
                        (uVar12,lVar6,**(undefined8 **)(lVar10 + 0x38));
              puVar3 = PTR_DAT_04cc4478;
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              iVar1 = *(int *)(lVar6 + 0x18);
              if (iVar1 < 1) {
                uVar11 = 0;
              }
              else {
                iVar14 = 0;
                do {
                  lVar7 = System_Collections_Generic_List_object___get_Item_3a81924
                                    (lVar6,iVar14,*(undefined8 *)puVar3);
                  lVar15 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
                  lVar8 = lVar7;
                  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
                    lVar8 = FUN_0216b470(lVar15);
                    lVar15 = lVar8;
                  }
                  if (lVar7 == 0) {
                    lVar9 = 0;
                  }
                  else {
                    lVar9 = thunk_FUN_0216e7a0(lVar7,lVar15);
                    lVar8 = lVar9;
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_021335a4(lVar7,lVar15);
                    }
                  }
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224(lVar8,lVar9);
                  }
                  (**(code **)(lVar5 + 0x18))
                            (*(undefined8 *)(lVar5 + 0x40),lVar9,param_2,
                             *(undefined8 *)(lVar5 + 0x28));
                  iVar14 = iVar14 + 1;
                } while (iVar1 != iVar14);
                uVar11 = (uint)(0 < *(int *)(lVar6 + 0x18));
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              UnityEngine_Pool_CollectionPool_object__object___Release_32ba7a4
                        (lVar6,*(undefined8 *)PTR_DAT_04cc4460);
              return (ulong)uVar11;
            }
            goto LAB_023cca24;
          }
        }
      }
    }
  }
  return uVar4;
}

