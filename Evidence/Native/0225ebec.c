/* IL2CPP: Dino.BusSand.App.Tables$$Table
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Tables__Table (System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Tables$$Table
   System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Tables__Table
   (System_String_o* name, const MethodInfo* method); */

long Dino_BusSand_App_Tables__Table_215ebec(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lStack_28;
  
  puVar1 = PTR_DAT_04cac018;
                    /* try { // try from 0225ec04 to 0235ec17 has its CatchHandler @ 0225ec64 */
  if ((bRam0000000004f9b810 & 1) == 0) {
                    /* try { // try from 0225ec18 to 0235ec2f has its CatchHandler @ 0225ea2c */
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cac020);
                    /* try { // try from 0225ec30 to 0235ec3f has its CatchHandler @ 0225ec6c */
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04cac028);
                    /* try { // try from 0225ec40 to 0235ec83 has its CatchHandler @ 0225ea2c */
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04cac018);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225eb20 with catch @ 0225ec58
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225ead8 with catch @ 0225ec60
                        */
    FUN_02132f7c(PTR_DAT_04cac030);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225ec04 with catch @ 0225ec64
                        */
    bRam0000000004f9b810 = 1;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225ec30 with catch @ 0225ec6c
                        */
  lVar2 = *(long *)puVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225ebac with catch @ 0225ec70
                        */
  lStack_28 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225eb8c with catch @ 0225ec74
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225eb78 with catch @ 0225ec78
                        */
  if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225eb58 with catch @ 0225ec7c
                       catch(type#1 @ 00000000) { ... } // from try @ 0225ebd0 with catch @ 0225ec7c
                        */
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
                    /* try { // try from 0225ec84 to 0235ec93 has its CatchHandler @ 0225ec94 */
  if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_0225ed98;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225ec84 with catch @ 0225ec94
                        */
                    /* try { // try from 0225ec98 to 0235ec9b has its CatchHandler @ 0225eccc */
                    /* try { // try from 0225ec9c to 0235ecaf has its CatchHandler @ 0225ea2c */
  uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (**(long **)(lVar2 + 0xb8),param_1,&lStack_28,*(undefined8 *)PTR_DAT_04cac020);
  if ((uVar3 & 1) != 0) {
    return lStack_28;
  }
                    /* try { // try from 0225ecb0 to 0235ecbf has its CatchHandler @ 0225ecc8 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0225ecc0 to 0235eccf has its CatchHandler @ 0225ea2c */
  lVar2 = Dino_BusSand_App_Tables__Json_215eb64(param_1);
  if (lVar2 == 0) {
LAB_0225ece0:
    lStack_28 = 0;
    uVar4 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cac030,param_1,0);
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
    }
    UnityEngine_Debug__LogWarning_4357a30(uVar4,0);
    lVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b08);
    System_Collections_Generic_Dictionary_object__object____ctor_34b3628
              (lVar2,*(undefined8 *)PTR_DAT_04ca9b50);
    lStack_28 = lVar2;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225ecb0 with catch @ 0225ecc8
                        */
    Dino_BusSand_App_MiniJson__Parse_2154dc4();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225ec98 with catch @ 0225eccc
                        */
    lStack_28 = Dino_BusSand_App_MiniJson__Obj_21561ec();
    if (lStack_28 == 0) goto LAB_0225ece0;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (**(long **)(lVar2 + 0xb8),param_1,lStack_28,*(undefined8 *)PTR_DAT_04cac028);
    return lStack_28;
  }
LAB_0225ed98:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

