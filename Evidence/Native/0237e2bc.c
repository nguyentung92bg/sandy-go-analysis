/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$Preset
UnityEngine_Material_o* Dino_BusSand_App_UI_KitAdopt__Preset (TMPro_TMP_Text_o* t, UnityEngine_Material_o* preset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$Preset
   UnityEngine_Material_o* Dino_BusSand_App_UI_KitAdopt__Preset (TMPro_TMP_Text_o* t,
   UnityEngine_Material_o* preset, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_KitAdopt__Preset_227e2bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  long lStack_28;
  
  puVar2 = PTR_DAT_04cad7b8;
  if ((bRam0000000004f9c134 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4c30);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4b80);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c134 = 1;
  }
  lVar3 = *(long *)puVar2;
  lStack_28 = 0;
  uStack_34 = 0;
  lStack_48 = 0;
  lStack_40 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_0237e4ec;
  if (*(int *)(**(long **)(lVar3 + 0xb8) + 0x18) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
      if ((uVar4 & 1) == 0) {
        if (param_1 == 0) {
LAB_0237e4ec:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar5 = TMPro_TMP_Text__get_transform_42cd604(param_1,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar4 = Dino_BusSand_App_UI_KitAdopt__Find_227d710(uVar5,&lStack_28,&uStack_34);
        if ((uVar4 & 1) != 0) {
          if (((lStack_28 == 0) || (*(long *)(lStack_28 + 0x20) == 0)) ||
             (lVar3 = *(long *)(*(long *)(lStack_28 + 0x20) + 0x40), lVar3 == 0)) goto LAB_0237e4ec;
          uVar4 = System_Collections_Generic_Dictionary_int__ValueTuple_object__object____TryGetValue_3408188
                            (lVar3,uStack_34,&lStack_48,*(undefined8 *)PTR_DAT_04cb4c30);
          if ((uVar4 & 1) != 0) {
            if (lStack_48 == 0) goto LAB_0237e4ec;
            if (*(char *)(lStack_48 + 0x72) != '\0') {
              if (lStack_40 == 0) goto LAB_0237e4ec;
              if (*(char *)(lStack_40 + 0x72) != '\0') {
                uVar5 = *(undefined8 *)(lStack_40 + 0x80);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
                if ((uVar4 & 1) != 0) {
                  if ((lStack_40 == 0) || (lStack_48 == 0)) goto LAB_0237e4ec;
                  uVar5 = *(undefined8 *)(lStack_40 + 0x80);
                  uVar6 = *(undefined8 *)(lStack_48 + 0x80);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,uVar6,0);
                  if ((uVar4 & 1) != 0) {
                    if (lStack_48 == 0) goto LAB_0237e4ec;
                    uVar5 = *(undefined8 *)(lStack_48 + 0x80);
                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_2,uVar5,0);
                    if ((uVar4 & 1) != 0) {
                      if (lStack_40 == 0) goto LAB_0237e4ec;
                      param_2 = *(undefined8 *)(lStack_40 + 0x80);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return param_2;
}

