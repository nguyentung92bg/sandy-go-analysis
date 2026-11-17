/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$FindMat
UnityEngine_Material_o* Dino_BusSand_App_UI_UiSkin__FindMat (Dino_BusSand_App_UI_UiSkin_o* __this, System_String_o* key, bool orPlain, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$FindMat
   UnityEngine_Material_o* Dino_BusSand_App_UI_UiSkin__FindMat (Dino_BusSand_App_UI_UiSkin_o*
   __this, System_String_o* key, bool orPlain, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_UiSkin__FindMat_22a2c60(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
                    /* try { // try from 023a2c64 to 024a2c67 has its CatchHandler @ 023a2c80 */
                    /* try { // try from 023a2c68 to 024a2c83 has its CatchHandler @ 023a2ae4 */
                    /* catch() { ... } // from try @ 023a2c64 with catch @ 023a2c80 */
                    /* try { // try from 023a2c84 to 024a2c8b has its CatchHandler @ 023a2c94 */
                    /* try { // try from 023a2c8c to 024a2c97 has its CatchHandler @ 023a2ae4 */
  if ((bRam0000000004f9c26b & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023a2c84 with catch @ 023a2c94
                        */
                    /* try { // try from 023a2c98 to 024a2e77 has its CatchHandler @ 023a2c98
                       catch() { ... } // from try @ 023a2c98 with catch @ 023a2c98
                       catch() { ... } // from try @ 023a2efc with catch @ 023a2c98
                       catch() { ... } // from try @ 023a3010 with catch @ 023a2c98
                       catch() { ... } // from try @ 023a303c with catch @ 023a2c98
                       catch() { ... } // from try @ 023a3068 with catch @ 023a2c98 */
    FUN_02132f7c(PTR_DAT_04cb5a78);
    FUN_02132f7c(PTR_DAT_04cb5a80);
    FUN_02132f7c(PTR_DAT_04cb5a88);
    FUN_02132f7c(PTR_DAT_04cb5a90);
    FUN_02132f7c(PTR_DAT_04cb5a98);
    FUN_02132f7c(PTR_DAT_04cb5aa0);
    FUN_02132f7c(PTR_DAT_04cb5aa8);
    FUN_02132f7c(PTR_DAT_04cb5ab0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c26b = 1;
  }
  uStack_58 = 0;
  plVar8 = (long *)(param_1 + 0x50);
  lVar5 = *plVar8;
  puStack_78 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (lVar5 == 0) {
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb5a90);
    System_Collections_Generic_Dictionary_object__object____ctor_34b3628
              (uVar6,*(undefined8 *)PTR_DAT_04cb5a80);
    *(undefined8 *)(param_1 + 0x50) = uVar6;
    thunk_FUN_02134474(plVar8,uVar6);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_023a2e9c;
    System_Collections_Generic_List_UiSkin_MatEntry___GetEnumerator_2abee68
              (&uStack_a0,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb5ab0);
    puVar3 = PTR_DAT_04cb5aa0;
    puVar2 = PTR_DAT_04cb5a88;
    puVar1 = PTR_DAT_04ca9ae8;
    puStack_78 = puStack_98;
    uStack_80 = uStack_a0;
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    uStack_a0 = 0;
    puStack_98 = &uStack_80;
    while (uVar7 = System_Collections_Generic_List_Enumerator_UiSkin_MatEntry___MoveNext_36187dc
                             (&uStack_80,*(undefined8 *)puVar3), uVar4 = uStack_68,
          uVar6 = uStack_70, (uVar7 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
      if ((uVar7 & 1) != 0) {
        if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (*plVar8,uVar6,uVar4,*(undefined8 *)puVar2);
      }
    }
    System_Collections_Generic_List_Enumerator_UiSkin_MatEntry___Dispose_36187d8
              (&uStack_80,*(undefined8 *)PTR_DAT_04cb5a98);
    lVar5 = *plVar8;
    if (lVar5 == 0) goto LAB_023a2e9c;
  }
  uVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (lVar5,param_2,&uStack_58,*(undefined8 *)PTR_DAT_04cb5a78);
  uVar6 = uStack_58;
  if ((uVar7 & 1) == 0) {
    if ((param_3 & 1) == 0) {
                    /* try { // try from 023a2e78 to 024a2e7f has its CatchHandler @ 023a3014 */
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      uVar6 = 0;
      if ((uVar7 & 1) != 0) {
        if (*(long *)(param_1 + 0x18) == 0) {
LAB_023a2e9c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 023a2e9c to 024a2efb has its CatchHandler @ 023a3018 */
          FUN_02133224(0);
        }
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x88);
      }
    }
  }
  return uVar6;
}

