/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$Ticker
Dino_BusSand_App_UI_GiftPackTicker_o* Dino_BusSand_App_UI_GiftPackUi__Ticker (Dino_BusSand_App_UI_UIPanel_o* p, System_String_o* owner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$Ticker
   Dino_BusSand_App_UI_GiftPackTicker_o* Dino_BusSand_App_UI_GiftPackUi__Ticker
   (Dino_BusSand_App_UI_UIPanel_o* p, System_String_o* owner, const MethodInfo* method); */

long * Dino_BusSand_App_UI_GiftPackUi__Ticker_21acea4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  if ((bRam0000000004f9ba72 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caee70);
    FUN_02132f7c(PTR_DAT_04caee78);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04caef00);
    bRam0000000004f9ba72 = 1;
  }
  puVar2 = PTR_DAT_04caef00;
  if (param_1 != 0) {
    lVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    uVar6 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,param_2,0);
    puVar1 = PTR_DAT_04ca9ae8;
    if (lVar5 != 0) {
      lVar5 = UnityEngine_Transform__Find_43d4bec(lVar5,uVar6,0);
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar9);
      }
      uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
      if ((uVar7 & 1) != 0) {
        uVar6 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,param_2,0);
        plVar8 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
        uVar11 = *(undefined8 *)PTR_DAT_04cad730;
        if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
        }
        lVar5 = System_Type__GetTypeFromHandle_483f0b4(uVar11,0);
        if (plVar8 == (long *)0x0) goto LAB_022ad124;
        if ((lVar5 != 0) &&
           (lVar9 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
          uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar6,0);
        }
        if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar8[4] = lVar5;
        thunk_FUN_02134474(plVar8 + 4,lVar5);
        lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
        UnityEngine_GameObject___ctor_43c2310(lVar5,uVar6,plVar8,0);
        if (lVar5 == 0) goto LAB_022ad124;
        lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0);
        uVar6 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
        if (lVar9 == 0) goto LAB_022ad124;
        UnityEngine_Transform__SetParent_43d1e34(lVar9,uVar6,0,0);
        lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0);
      }
      if (lVar5 != 0) {
        plVar8 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                   (lVar5,*(undefined8 *)PTR_DAT_04caee70);
        lVar9 = *(long *)puVar1;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar9);
        }
        uVar7 = UnityEngine_Object__op_Equality_43c6f30(plVar8,0,0);
        if ((uVar7 & 1) == 0) {
          return plVar8;
        }
        lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0);
        if (lVar5 != 0) {
          lVar9 = *(long *)PTR_DAT_04caee78;
          puVar10 = *(undefined8 **)(lVar9 + 0x38);
          if (puVar10 == (undefined8 *)0x0) {
            FUN_0216b4cc(lVar9);
            puVar10 = *(undefined8 **)(lVar9 + 0x38);
          }
          uVar6 = *puVar10;
          if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = System_Type__GetTypeFromHandle_483f0b4(uVar6,0);
          plVar8 = (long *)UnityEngine_GameObject__AddComponent_43c0d20(lVar5,uVar6,0);
          lVar5 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0216b470(lVar5);
          }
          if (plVar8 != (long *)0x0) {
            lVar9 = *plVar8;
            uVar7 = FUN_0219428c(lVar5,lVar9);
            if ((uVar7 & 1) == 0) {
              if ((*(ushort *)(lVar9 + 0x135) >> 0xc & 1) == 0) {
                plVar8 = (long *)0x0;
              }
              else {
                if (((((*(byte *)(lVar5 + 0x118) >> 5 & 1) != 0) ||
                     (*(char *)(lVar5 + 0x2a) == '\x1e')) || (*(char *)(lVar5 + 0x2a) == '\x13')) &&
                   ((*(long *)(lVar5 + 0x70) != 0 &&
                    (lVar9 = *(long *)(*(long *)(lVar5 + 0x70) + 0x28), lVar9 != 0)))) {
                  lVar4 = FUN_0217e1c0(plVar8,lVar9);
                  if (lVar4 != 0) {
                    return plVar8;
                  }
                  iVar3 = (*(code *)**(undefined8 **)plVar8[2])
                                    ((undefined8 *)plVar8[2],lVar9,&stack0xffffffffffffffd8);
                  if (-1 < iVar3) {
                    uVar7 = FUN_0217e250(plVar8,lVar9,0);
                    lVar4 = 0;
                    if ((uVar7 & 1) == 0) {
                      (**(code **)(lRam0000000000000000 + 0x10))();
                      lVar4 = FUN_0217e1c0(plVar8,lVar9);
                    }
                    if (lVar4 != 0) {
                      return plVar8;
                    }
                  }
                }
                if (lRam0000000004faee08 != lVar5) {
                  plVar8 = (long *)0x0;
                }
              }
            }
          }
          return plVar8;
        }
      }
    }
  }
LAB_022ad124:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

