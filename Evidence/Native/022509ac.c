/* IL2CPP: Dino.BusSand.App.Fx$$Acquire
UnityEngine_GameObject_o* Dino_BusSand_App_Fx__Acquire (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Fx$$Acquire
   UnityEngine_GameObject_o* Dino_BusSand_App_Fx__Acquire (System_String_o* key, const MethodInfo*
   method); */

long Dino_BusSand_App_Fx__Acquire_21509ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_38;
  
  puVar2 = PTR_DAT_04cab448;
  if ((bRam0000000004f9b7c0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab470);
    FUN_02132f7c(PTR_DAT_04cab448);
    FUN_02132f7c(PTR_DAT_04cab478);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab480);
    FUN_02132f7c(PTR_DAT_04cab488);
                    /* try { // try from 02250a24 to 02350a87 has its CatchHandler @ 02250b9c */
    FUN_02132f7c(PTR_DAT_04cab490);
    bRam0000000004f9b7c0 = 1;
  }
  lVar4 = *(long *)puVar2;
  lStack_38 = 0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (**(long **)(lVar4 + 0xb8) == 0) {
LAB_02250b90:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 022508b4 with catch @ 02250b90 */
    FUN_02133224();
  }
  uVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (**(long **)(lVar4 + 0xb8),param_1,&lStack_38,*(undefined8 *)PTR_DAT_04cab470);
  puVar3 = PTR_DAT_04cab480;
  if ((uVar5 & 1) == 0) {
LAB_02250acc:
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_App_UiAssets__Prefab_21513b8(param_1);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
    lVar4 = 0;
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Fx__get_Root_2150538();
      uVar7 = Dino_BusSand_App_Fx__get_Root_2150538();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
                    /* try { // try from 02250b50 to 02350b57 has its CatchHandler @ 02250b8c */
                    /* try { // try from 02250b58 to 02350b5f has its CatchHandler @ 02250b88 */
                    /* try { // try from 02250b60 to 02350b67 has its CatchHandler @ 02250b84 */
      lVar4 = UnityEngine_Object__Instantiate_object__28052a0
                        (uVar6,uVar7,*(undefined8 *)PTR_DAT_04cab478);
      if (lVar4 == 0) goto LAB_02250b90;
                    /* try { // try from 02250b68 to 02350b6f has its CatchHandler @ 02250b80 */
                    /* try { // try from 02250b70 to 02350b77 has its CatchHandler @ 02250b7c */
      UnityEngine_Object__set_name_43c72ec(lVar4,param_1,0);
    }
  }
  else {
    do {
      if (lStack_38 == 0) goto LAB_02250b90;
                    /* try { // try from 02250a88 to 02350b4f has its CatchHandler @ 02250540 */
      if (*(int *)(lStack_38 + 0x18) < 1) goto LAB_02250acc;
      lVar4 = System_Collections_Generic_Stack_object___Pop_2eeda6c(lStack_38,*(undefined8 *)puVar3)
      ;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
    } while ((uVar5 & 1) == 0);
  }
                    /* catch() { ... } // from try @ 02250720 with catch @ 02250b78
                       try { // try from 02250b78 to 02350bbb has its CatchHandler @ 02250540 */
                    /* catch() { ... } // from try @ 02250b70 with catch @ 02250b7c */
                    /* catch() { ... } // from try @ 02250b68 with catch @ 02250b80 */
                    /* catch() { ... } // from try @ 02250b60 with catch @ 02250b84 */
                    /* catch() { ... } // from try @ 02250b58 with catch @ 02250b88 */
                    /* catch() { ... } // from try @ 02250b50 with catch @ 02250b8c */
  return lVar4;
}

