/* IL2CPP: Dino.BusSand.App.UI.ChestPanel$$Group
UnityEngine_CanvasGroup_o* Dino_BusSand_App_UI_ChestPanel__Group (UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ChestPanel$$Group
   UnityEngine_CanvasGroup_o* Dino_BusSand_App_UI_ChestPanel__Group (UnityEngine_Transform_o* t,
   const MethodInfo* method); */

long * Dino_BusSand_App_UI_ChestPanel__Group_2326bb4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plStack_28;
  
  if ((bRam0000000004f9c5e6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c5e6 = 1;
  }
  puVar1 = PTR_DAT_04cad4c0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar5 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  if ((bRam0000000004f9c1be & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0890,0);
    FUN_02132f7c(PTR_DAT_04cb5260);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c1be = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar5 != 0) {
    plVar3 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                               (lVar5,*(undefined8 *)PTR_DAT_04cb5260);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(plVar3,0,0);
    if ((uVar4 & 1) == 0) {
      lVar6 = *(long *)PTR_DAT_04cb0890;
      puVar7 = *(undefined8 **)(lVar6 + 0x38);
      if (puVar7 == (undefined8 *)0x0) {
        FUN_0216b4cc(lVar6);
        puVar7 = *(undefined8 **)(lVar6 + 0x38);
      }
      uVar8 = *puVar7;
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = System_Type__GetTypeFromHandle_483f0b4(uVar8,0);
      plVar3 = (long *)UnityEngine_GameObject__AddComponent_43c0d20(lVar5,uVar8,0);
      lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0216b470(lVar5);
      }
      if (plVar3 != (long *)0x0) {
        lVar6 = *plVar3;
        uVar4 = FUN_0219428c(lVar5,lVar6);
        if ((uVar4 & 1) == 0) {
          if ((*(ushort *)(lVar6 + 0x135) >> 0xc & 1) == 0) {
            plVar3 = (long *)0x0;
          }
          else {
            if (((((*(byte *)(lVar5 + 0x118) >> 5 & 1) != 0) || (*(char *)(lVar5 + 0x2a) == '\x1e'))
                || (*(char *)(lVar5 + 0x2a) == '\x13')) &&
               ((*(long *)(lVar5 + 0x70) != 0 &&
                (lVar6 = *(long *)(*(long *)(lVar5 + 0x70) + 0x28), lVar6 != 0)))) {
              plStack_28 = (long *)FUN_0217e1c0(plVar3,lVar6);
              if (plStack_28 != (long *)0x0) {
                return plVar3;
              }
              iVar2 = (*(code *)**(undefined8 **)plVar3[2])
                                ((undefined8 *)plVar3[2],lVar6,&plStack_28);
              if (-1 < iVar2) {
                uVar4 = FUN_0217e250(plVar3,lVar6,plStack_28);
                if ((uVar4 & 1) == 0) {
                  (**(code **)(*plStack_28 + 0x10))();
                  plStack_28 = (long *)FUN_0217e1c0(plVar3,lVar6);
                }
                if (plStack_28 != (long *)0x0) {
                  return plVar3;
                }
              }
            }
            if (lRam0000000004faee08 != lVar5) {
              plVar3 = (long *)0x0;
            }
          }
        }
      }
      return plVar3;
    }
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

