/* IL2CPP: Dino.BusSand.App.Lang$$Read
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Lang__Read (System_String_o* code, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Lang$$Read
   System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Lang__Read
   (System_String_o* code, const MethodInfo* method); */

long Dino_BusSand_App_Lang__Read_215f4bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_04cac058;
  puVar2 = PTR_DAT_04cab020;
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 0225f4c4 to 0235f50b has its CatchHandler @ 0225f314 */
  if ((bRam0000000004f9b81a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b50);
                    /* try { // try from 0225f50c to 0235f517 has its CatchHandler @ 0225f558 */
    FUN_02132f7c(PTR_DAT_04ca9c68);
    FUN_02132f7c(PTR_DAT_04cac060);
    FUN_02132f7c(PTR_DAT_04ca9b58);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04cab6a0);
    FUN_02132f7c(PTR_DAT_04cab6c8);
                    /* try { // try from 0225f550 to 0235f557 has its CatchHandler @ 0225f55c */
    FUN_02132f7c(PTR_DAT_04cab6d0);
                    /* catch() { ... } // from try @ 0225f50c with catch @ 0225f558
                       try { // try from 0225f558 to 0235f57f has its CatchHandler @ 0225f314 */
                    /* catch() { ... } // from try @ 0225f550 with catch @ 0225f55c */
                    /* catch() { ... } // from try @ 0225f4b4 with catch @ 0225f560 */
    FUN_02132f7c(PTR_DAT_04cab720);
                    /* catch() { ... } // from try @ 0225f390 with catch @ 0225f564 */
    FUN_02132f7c(PTR_DAT_04cac068);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab020);
    FUN_02132f7c(PTR_DAT_04cac070);
    FUN_02132f7c(PTR_DAT_04cac058);
    FUN_02132f7c(PTR_DAT_04cab900);
    bRam0000000004f9b81a = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar5 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,param_1,0);
  lVar6 = UnityEngine_Resources__Load_object__2891e2c(uVar5,*(undefined8 *)puVar2);
  lVar10 = *(long *)puVar1;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar10);
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((uVar7 & 1) != 0) {
    lVar6 = UnityEngine_Resources__Load_object__2891e2c
                      (*(undefined8 *)PTR_DAT_04cac070,*(undefined8 *)puVar2);
                    /* try { // try from 0225f620 to 0235f677 has its CatchHandler @ 0225f620
                       catch() { ... } // from try @ 0225f620 with catch @ 0225f620
                       catch() { ... } // from try @ 0225f680 with catch @ 0225f620 */
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  puVar1 = PTR_DAT_04ca9b50;
  if ((uVar7 & 1) == 0) {
                    /* try { // try from 0225f678 to 0235f67f has its CatchHandler @ 0225f6a8 */
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b08);
                    /* try { // try from 0225f680 to 0235f6c3 has its CatchHandler @ 0225f620 */
    System_Collections_Generic_Dictionary_object__object____ctor_34b3628
              (lVar6,*(undefined8 *)puVar1);
  }
  else {
    if (lVar6 == 0) goto LAB_0225f7b8;
    UnityEngine_TextAsset__get_text_43c62e8(lVar6,0);
    Dino_BusSand_App_MiniJson__Parse_2154dc4();
    lVar6 = Dino_BusSand_App_MiniJson__Obj_21561ec();
  }
  uVar7 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cab900,0);
  if ((uVar7 & 1) == 0) {
    return lVar6;
  }
                    /* catch() { ... } // from try @ 0225f678 with catch @ 0225f6a8 */
  if (lVar6 != 0) {
    uVar5 = System_Collections_Generic_Dictionary_object__object___get_Keys_34b406c
                      (lVar6,*(undefined8 *)PTR_DAT_04cac060);
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab748);
    System_Collections_Generic_List_object____ctor_3a814c8
              (lVar10,uVar5,*(undefined8 *)PTR_DAT_04cac068);
    if (lVar10 != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_58,lVar10,*(undefined8 *)PTR_DAT_04cab720);
      puVar4 = PTR_DAT_04cab6c8;
      puVar3 = PTR_DAT_04ca9c68;
      puVar2 = PTR_DAT_04ca9b58;
      puVar1 = PTR_DAT_04ca9ac8;
      while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_58,*(undefined8 *)puVar4), uVar5 = uStack_48,
            (uVar7 & 1) != 0) {
        plVar8 = (long *)System_Collections_Generic_Dictionary_object__object___get_Item_34b4324
                                   (lVar6,uStack_48,*(undefined8 *)puVar3);
        if ((plVar8 != (long *)0x0) && (*plVar8 == *(long *)(puVar1 + 0x90))) {
          uVar9 = Dino_BusSand_App_Devanagari__OrderForTmp_214f8e8();
          System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                    (lVar6,uVar5,uVar9,*(undefined8 *)puVar2);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_58,*(undefined8 *)PTR_DAT_04cab6a0);
      return lVar6;
    }
  }
LAB_0225f7b8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

