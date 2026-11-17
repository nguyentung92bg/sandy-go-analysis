/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$Find
bool Dino_BusSand_App_UI_KitAdopt__Find (UnityEngine_Transform_o* t, Dino_BusSand_App_UI_KitAdopt_Scope_o** scope, int32_t* index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$Find
   bool Dino_BusSand_App_UI_KitAdopt__Find (UnityEngine_Transform_o* t,
   Dino_BusSand_App_UI_KitAdopt_Scope_o** scope, int32_t* index, const MethodInfo* method); */

uint Dino_BusSand_App_UI_KitAdopt__Find_227d710
               (undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  puVar1 = PTR_DAT_04cad7b8;
  if ((bRam0000000004f9c12e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4bc0);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4b80);
    FUN_02132f7c(PTR_DAT_04cb4bc8);
    bRam0000000004f9c12e = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  puVar3 = PTR_DAT_04cb4bc8;
  puVar2 = PTR_DAT_04cb4bc0;
  if (**(long **)(lVar4 + 0xb8) != 0) {
    uVar7 = *(uint *)(**(long **)(lVar4 + 0xb8) + 0x18);
    do {
      uVar7 = uVar7 - 1;
      if ((int)uVar7 < 0) {
        *param_2 = 0;
        thunk_FUN_02134474(param_2,0);
        *param_3 = 0xffffffff;
        goto LAB_0237d858;
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar1;
      }
      if (((**(long **)(lVar4 + 0xb8) == 0) ||
          (lVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                             (**(long **)(lVar4 + 0xb8),uVar7,*(undefined8 *)puVar3), lVar4 == 0))
         || (*(long *)(lVar4 + 0x38) == 0)) goto LAB_0237d874;
      uVar5 = System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
                        (*(long *)(lVar4 + 0x38),param_1,param_3,*(undefined8 *)puVar2);
    } while ((uVar5 & 1) == 0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    if (**(long **)(lVar4 + 0xb8) != 0) {
      uVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                        (**(long **)(lVar4 + 0xb8),uVar7,*(undefined8 *)puVar3);
      *param_2 = uVar6;
      thunk_FUN_02134474(param_2,uVar6);
LAB_0237d858:
      return ~uVar7 >> 0x1f;
    }
  }
LAB_0237d874:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

