/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$Restore
void Dino_BusSand_Sdk_UnityIapProvider__Restore (Dino_BusSand_Sdk_UnityIapProvider_o* __this, System_Action_bool__o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$Restore
   void Dino_BusSand_Sdk_UnityIapProvider__Restore (Dino_BusSand_Sdk_UnityIapProvider_o* __this,
   System_Action_bool__o* done, const MethodInfo* method); */

void Dino_BusSand_Sdk_UnityIapProvider__Restore_243e6ac(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  puVar1 = PTR_DAT_04cbf6a0;
  if ((bRam0000000004f9cc90 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad170);
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cbf6a8);
    FUN_02132f7c(PTR_DAT_04cbf6b0);
    FUN_02132f7c(PTR_DAT_04cbf6b8);
    FUN_02132f7c(PTR_DAT_04cbf6a0);
    bRam0000000004f9cc90 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar9 = (long *)(lVar3 + 0x10);
  *plVar9 = param_2;
  thunk_FUN_02134474(plVar9,param_2);
  puVar1 = PTR_DAT_04caa210;
  if (*(long *)(param_1 + 0x10) == 0) {
    if (*(char *)(param_1 + 0x31) != '\0') {
      *(undefined2 *)(param_1 + 0x30) = 0;
      Dino_BusSand_Sdk_UnityIapProvider__InitAsync_243dc9c(param_1);
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar2 = UnityEngine_Application__get_platform_4352d00(0);
    if (iVar2 != 8) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar2 = UnityEngine_Application__get_platform_4352d00(0);
      puVar1 = PTR_DAT_04cbf6c0;
      if (iVar2 != 1) {
        lVar3 = *plVar9;
        if ((bRam0000000004f9cc91 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cad170);
          FUN_02132f7c(PTR_DAT_04caa210);
          FUN_02132f7c(PTR_DAT_04cbf6c8);
          FUN_02132f7c(PTR_DAT_04cbf6d0);
          FUN_02132f7c(PTR_DAT_04cbf6d8);
          FUN_02132f7c(PTR_DAT_04cbf6c0);
          bRam0000000004f9cc91 = 1;
        }
        lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
        System_Object___ctor_4870e5c(lVar6,0);
        puVar1 = PTR_DAT_04caa210;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        *(long *)(lVar6 + 0x18) = param_1;
        thunk_FUN_02134474((long *)(lVar6 + 0x18),param_1);
        plVar9 = (long *)(lVar6 + 0x20);
        *plVar9 = lVar3;
        thunk_FUN_02134474(plVar9,lVar3);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar2 = UnityEngine_Application__get_platform_4352d00(0);
        if ((iVar2 == 0xb) && (plVar10 = *(long **)(param_1 + 0x18), plVar10 != (long *)0x0)) {
          lVar3 = *plVar10;
          lVar11 = *(long *)PTR_DAT_04cbf6c8;
          uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)(lVar11 + 0x20)) {
                lVar3 = lVar3 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_0253ea78;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          lVar3 = FUN_0216b7a4(plVar10);
LAB_0253ea78:
          lVar3 = thunk_FUN_02150f88(*(undefined8 *)(lVar3 + 8),lVar11);
          plVar10 = (long *)(**(code **)(lVar3 + 8))(plVar10,lVar3);
          puVar1 = PTR_DAT_04cad170;
          if (plVar10 != (long *)0x0) {
            *(undefined1 *)(lVar6 + 0x10) = 0;
            uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
            System_Action_bool__object____ctor_35f6c44
                      (uVar4,lVar6,*(undefined8 *)PTR_DAT_04cbf6d8,0);
            lVar3 = *plVar10;
            uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04cbf6d0) {
                  puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0253eb60;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)PTR_DAT_04cbf6d0,0);
LAB_0253eb60:
                    /* WARNING: Could not recover jumptable at 0x0253eb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar5)(plVar10,uVar4,puVar5[1]);
            return;
          }
        }
        Dino_BusSand_Sdk_UnityIapProvider__DeliverOwnedNonConsumables_243eb88
                  (*(undefined8 *)(param_1 + 0x10));
        lVar3 = *plVar9;
        if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0253eb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),1,*(undefined8 *)(lVar3 + 0x28))
          ;
          return;
        }
        return;
      }
    }
    plVar10 = *(long **)(param_1 + 0x18);
    if (plVar10 != (long *)0x0) {
      lVar6 = *plVar10;
      lVar11 = *(long *)PTR_DAT_04cbf6b0;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)(lVar11 + 0x20)) {
            lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
            goto LAB_0253e834;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      lVar6 = FUN_0216b7a4(plVar10);
LAB_0253e834:
      lVar6 = thunk_FUN_02150f88(*(undefined8 *)(lVar6 + 8),lVar11);
      plVar10 = (long *)(**(code **)(lVar6 + 8))(plVar10,lVar6);
      if (plVar10 != (long *)0x0) {
        uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad170);
        System_Action_bool__object____ctor_35f6c44(uVar4,lVar3,*(undefined8 *)PTR_DAT_04cbf6b8,0);
        lVar3 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04cbf6a8) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0253e910;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)PTR_DAT_04cbf6a8,0);
LAB_0253e910:
                    /* WARNING: Could not recover jumptable at 0x0253e928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar5)(plVar10,uVar4,puVar5[1]);
        return;
      }
    }
  }
  lVar3 = *plVar9;
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0253e8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),0,*(undefined8 *)(lVar3 + 0x28));
    return;
  }
  return;
}

