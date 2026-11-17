/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$<BuildInputCatcher>b__56_0
void Dino_BusSand_App_UI_GuidePanel___BuildInputCatcher_b__56_0 (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_EventSystems_BaseEventData_o* d, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$<BuildInputCatcher>b__56_0
   void Dino_BusSand_App_UI_GuidePanel___BuildInputCatcher_b__56_0
   (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_EventSystems_BaseEventData_o* d, const
   MethodInfo* method); */

ulong Dino_BusSand_App_UI_GuidePanel___BuildInputCatcher_b__56_0_22cda88
                (ulong param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  undefined4 uVar17;
  
  if ((bRam0000000004f9c38f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabcc0);
    bRam0000000004f9c38f = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_023cdadc:
    param_2 = (long *)0x0;
  }
  else {
    bVar2 = *(byte *)(*(long *)PTR_DAT_04cabcc0 + 0x130);
    if (*(byte *)(*param_2 + 0x130) < bVar2) goto LAB_023cdadc;
    if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04cabcc0) {
      param_2 = (long *)0x0;
    }
  }
  uVar5 = param_1;
  if ((bRam0000000004f9c384 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6ae0);
    FUN_02132f7c(PTR_DAT_04cabcb8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    uVar5 = FUN_02132f7c(PTR_DAT_04cabda8);
    bRam0000000004f9c384 = 1;
  }
  *(undefined1 *)(param_1 + 0xf8) = 0;
  puVar3 = PTR_DAT_04ca9ae8;
  if ((param_2 != (long *)0x0) && (*(int *)(param_1 + 0x4c) == 2)) {
    if (*(long *)(param_1 + 0x38) == 0) {
LAB_023cca24:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(*(long *)(param_1 + 0x38) + 0x44) != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0xd8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
      if ((uVar5 & 1) == 0) {
        uVar13 = *(undefined8 *)(param_1 + 0xf0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
        if ((uVar5 & 1) == 0) {
          uVar13 = *(undefined8 *)(param_1 + 0xd8);
          uVar17 = *(undefined4 *)((long)param_2 + 0x104);
          lVar6 = param_2[0x21];
          uVar14 = *(undefined8 *)(param_1 + 0x50);
          if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint_467e02c
                            (uVar17,(int)lVar6,uVar13,uVar14,0);
          if ((uVar5 & 1) != 0) {
            *(undefined1 *)(param_1 + 0xf8) = 1;
            if (*(long *)(param_1 + 0xf0) != 0) {
              uVar13 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xf0),0);
              if (*(int *)(*(long *)PTR_DAT_04cabcb8 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabcb8);
              }
              lVar6 = FUN_023d0bec(0);
              lVar11 = *(long *)PTR_DAT_04cb6ae0;
              if (*(long *)(lVar11 + 0x38) == 0) {
                FUN_02132f7c(PTR_DAT_04cc4458);
                FUN_02132f7c(PTR_DAT_04cc4460);
                FUN_02132f7c(PTR_DAT_04cc4468);
                FUN_02132f7c(PTR_DAT_04cabcb8);
                FUN_02132f7c(PTR_DAT_04cc4470);
                FUN_02132f7c(PTR_DAT_04cc4478);
                if (*(long *)(lVar11 + 0x38) == 0) {
                  FUN_0216b4cc(lVar11);
                }
              }
              puVar3 = PTR_DAT_04cc4468;
              if (*(int *)(*(long *)PTR_DAT_04cc4468 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar7 = UnityEngine_Pool_CollectionPool_object__object___Get_32ba63c
                                (*(undefined8 *)PTR_DAT_04cc4458);
              if (*(int *)(*(long *)PTR_DAT_04cabcb8 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabcb8);
              }
              UnityEngine_EventSystems_ExecuteEvents__GetEventList_object__2746ba4
                        (uVar13,lVar7,**(undefined8 **)(lVar11 + 0x38));
              puVar4 = PTR_DAT_04cc4478;
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              iVar1 = *(int *)(lVar7 + 0x18);
              if (iVar1 < 1) {
                uVar12 = 0;
              }
              else {
                iVar15 = 0;
                do {
                  lVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                                    (lVar7,iVar15,*(undefined8 *)puVar4);
                  lVar16 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
                  lVar9 = lVar8;
                  if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
                    lVar9 = FUN_0216b470(lVar16);
                    lVar16 = lVar9;
                  }
                  if (lVar8 == 0) {
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = thunk_FUN_0216e7a0(lVar8,lVar16);
                    lVar9 = lVar10;
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_021335a4(lVar8,lVar16);
                    }
                  }
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224(lVar9,lVar10);
                  }
                  (**(code **)(lVar6 + 0x18))
                            (*(undefined8 *)(lVar6 + 0x40),lVar10,param_2,
                             *(undefined8 *)(lVar6 + 0x28));
                  iVar15 = iVar15 + 1;
                } while (iVar1 != iVar15);
                uVar12 = (uint)(0 < *(int *)(lVar7 + 0x18));
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              UnityEngine_Pool_CollectionPool_object__object___Release_32ba7a4
                        (lVar7,*(undefined8 *)PTR_DAT_04cc4460);
              return (ulong)uVar12;
            }
            goto LAB_023cca24;
          }
        }
      }
    }
  }
  return uVar5;
}

