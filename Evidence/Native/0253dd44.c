/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$Purchase
void Dino_BusSand_Sdk_UnityIapProvider__Purchase (Dino_BusSand_Sdk_UnityIapProvider_o* __this, System_String_o* productId, System_Action_bool__o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$Purchase
   void Dino_BusSand_Sdk_UnityIapProvider__Purchase (Dino_BusSand_Sdk_UnityIapProvider_o* __this,
   System_String_o* productId, System_Action_bool__o* done, const MethodInfo* method); */

void Dino_BusSand_Sdk_UnityIapProvider__Purchase_243dd44
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  float fStack_34;
  
  if ((bRam0000000004f9cc8b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbf628);
    FUN_02132f7c(PTR_DAT_04cbb220);
    FUN_02132f7c(PTR_DAT_04cbb128);
    FUN_02132f7c(PTR_DAT_04cbf630);
    FUN_02132f7c(PTR_DAT_04cbf638);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cbf640);
    FUN_02132f7c(PTR_DAT_04cbf648);
    FUN_02132f7c(PTR_DAT_04cbf650);
    FUN_02132f7c(PTR_DAT_04cbf658);
    FUN_02132f7c(PTR_DAT_04cbf660);
    FUN_02132f7c(PTR_DAT_04cbf668);
    FUN_02132f7c(PTR_DAT_04cbf670);
    FUN_02132f7c(PTR_DAT_04cbf678);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9cc8b = 1;
  }
  puVar1 = PTR_DAT_04cad1f0;
  fStack_34 = 0.0;
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar6 = *(long *)PTR_DAT_04cad1f0;
    puVar5 = (undefined8 *)PTR_DAT_04cbf650;
    if (*(char *)(param_1 + 0x31) != '\0') {
      puVar5 = (undefined8 *)PTR_DAT_04cbf648;
    }
    uVar4 = *puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar1;
    }
    puVar5 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20);
    *puVar5 = uVar4;
    thunk_FUN_02134474(puVar5,uVar4);
    puVar5 = (undefined8 *)PTR_DAT_04ca9c30;
    if (*(char *)(param_1 + 0x31) != '\0') {
      puVar5 = (undefined8 *)PTR_DAT_04cbf668;
    }
    uVar4 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbf658,*puVar5,0);
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
    }
    UnityEngine_Debug__LogWarning_4357a30(uVar4,0);
    if (*(char *)(param_1 + 0x31) != '\0') {
      *(undefined2 *)(param_1 + 0x30) = 0;
      Dino_BusSand_Sdk_UnityIapProvider__InitAsync_243dc9c(param_1);
    }
    if (param_3 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0253e00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x18))(*(undefined8 *)(param_3 + 0x40),0,*(undefined8 *)(param_3 + 0x28))
    ;
    return;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = System_Collections_Generic_Dictionary_object__float___TryGetValue_34b9648
                      (*(long *)(param_1 + 0x28),param_2,&fStack_34,*(undefined8 *)PTR_DAT_04cbb220)
    ;
    if (((uVar3 & 1) != 0) &&
       (fVar10 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0),
       180.0 < fVar10 - fStack_34)) {
      uVar4 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbf640,param_2,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogWarning_4357a30(uVar4,0);
      Dino_BusSand_Sdk_UnityIapProvider__Complete_243e214(param_1,param_2,0);
    }
    puVar1 = PTR_DAT_04cbf638;
    plVar9 = *(long **)(param_1 + 0x10);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04cbf638) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0253e01c;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)PTR_DAT_04cbf638,0);
LAB_0253e01c:
      lVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if (lVar6 != 0) {
        lVar6 = UnityEngine_Purchasing_ProductCollection__WithID_411be1c(lVar6,param_2,0);
        puVar2 = PTR_DAT_04cad1f0;
        if ((lVar6 == 0) || (*(char *)(lVar6 + 0x20) == '\0')) {
          lVar6 = *(long *)PTR_DAT_04cad1f0;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar2;
          }
          *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20) = *(undefined8 *)PTR_DAT_04cbf660;
          thunk_FUN_02134474();
          uVar4 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbf670,param_2,0);
          if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
          }
          UnityEngine_Debug__LogWarning_4357a30(uVar4,0);
joined_r0x0253e11c:
          if (param_3 == 0) {
            return;
          }
          (**(code **)(param_3 + 0x18))
                    (*(undefined8 *)(param_3 + 0x40),0,*(undefined8 *)(param_3 + 0x28));
          return;
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey_34b4598
                            (*(long *)(param_1 + 0x20),param_2,*(undefined8 *)PTR_DAT_04cbf628);
          puVar2 = PTR_DAT_04cad1f0;
          if ((uVar3 & 1) != 0) {
            lVar6 = *(long *)PTR_DAT_04cad1f0;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar6 = *(long *)puVar2;
            }
            *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20) = *(undefined8 *)PTR_DAT_04cbf678;
            thunk_FUN_02134474();
            goto joined_r0x0253e11c;
          }
          if (*(long *)(param_1 + 0x20) != 0) {
            System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                      (*(long *)(param_1 + 0x20),param_2,param_3,*(undefined8 *)PTR_DAT_04cbf630);
            lVar8 = *(long *)(param_1 + 0x28);
            UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
            if (lVar8 != 0) {
              System_Collections_Generic_Dictionary_object__float___set_Item_34b7b00
                        (lVar8,param_2,*(undefined8 *)PTR_DAT_04cbb128);
              plVar9 = *(long **)(param_1 + 0x10);
              if (plVar9 != (long *)0x0) {
                lVar8 = *plVar9;
                uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar3 != 0) {
                  piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                      puVar5 = (undefined8 *)(lVar8 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                      goto LAB_0253e1d8;
                    }
                    uVar3 = uVar3 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar3 != 0);
                }
                puVar5 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)puVar1,1);
LAB_0253e1d8:
                (*(code *)*puVar5)(plVar9,lVar6,puVar5[1]);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

