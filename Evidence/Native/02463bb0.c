/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Row
void Dino_BusSand_Cheat_CheatManager__Row (Dino_BusSand_Cheat_CheatManager_o* __this, System_Func_Nullable_CheatAction___array* items, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Row
   void Dino_BusSand_Cheat_CheatManager__Row (Dino_BusSand_Cheat_CheatManager_o* __this,
   System_Func_Nullable_CheatAction___array* items, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__Row_2363bb0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04cba558;
                    /* try { // try from 02463bbc to 02563bff has its CatchHandler @ 02463a74 */
  if ((bRam0000000004f9c745 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba558);
    FUN_02132f7c(PTR_DAT_04cba868);
    bRam0000000004f9c745 = 1;
  }
  lVar7 = *(long *)puVar1;
  lVar5 = *(long *)(lVar7 + 0x38);
                    /* try { // try from 02463c00 to 02563c03 has its CatchHandler @ 02463c24 */
  if (lVar5 == 0) {
                    /* try { // try from 02463c04 to 02563c07 has its CatchHandler @ 02463c20 */
                    /* try { // try from 02463c08 to 02563c0b has its CatchHandler @ 02463a74 */
    FUN_0216b4cc(lVar7);
                    /* try { // try from 02463c0c to 02563c0f has its CatchHandler @ 02463c18 */
    lVar5 = *(long *)(lVar7 + 0x38);
  }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02463b80 with catch @ 02463c10
                       try { // try from 02463c10 to 02563c43 has its CatchHandler @ 02463a74 */
  lVar5 = *(long *)(lVar5 + 0x10);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02463b84 with catch @ 02463c14
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02463c0c with catch @ 02463c18
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02463b98 with catch @ 02463c1c
                        */
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02463c04 with catch @ 02463c20
                        */
    lVar5 = FUN_0216b470();
  }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02463c00 with catch @ 02463c24
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02463b38 with catch @ 02463c28
                        */
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 02463c44 to 02563c47 has its CatchHandler @ 02463c60 */
    lVar5 = FUN_0216b470();
  }
                    /* try { // try from 02463c48 to 02563c63 has its CatchHandler @ 02463a74 */
  UnityEngine_GUILayout__BeginHorizontal_440fbac(**(undefined8 **)(lVar5 + 0xb8),0);
  if (param_2 == 0) {
LAB_02463cd4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = *(uint *)(param_2 + 0x18);
                    /* catch() { ... } // from try @ 02463c44 with catch @ 02463c60 */
                    /* try { // try from 02463c64 to 02563c6b has its CatchHandler @ 02463c74 */
  if ((int)uVar4 < 1) {
    cVar6 = '\0';
  }
  else {
    lVar5 = 0;
                    /* try { // try from 02463c6c to 02563c77 has its CatchHandler @ 02463a74 */
    cVar6 = '\0';
    do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02463c64 with catch @ 02463c74
                        */
      if (uVar4 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      lVar7 = *(long *)(param_2 + 0x20 + lVar5 * 8);
      if (lVar7 == 0) goto LAB_02463cd4;
                    /* try { // try from 02463c8c to 02563d83 has its CatchHandler @ 02463c8c
                       catch() { ... } // from try @ 02463c8c with catch @ 02463c8c
                       catch() { ... } // from try @ 02463db4 with catch @ 02463c8c
                       catch() { ... } // from try @ 02463df8 with catch @ 02463c8c
                       catch() { ... } // from try @ 02463e24 with catch @ 02463c8c
                       catch() { ... } // from try @ 02463e48 with catch @ 02463c8c */
      cVar2 = (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      uVar4 = *(uint *)(param_2 + 0x18);
      lVar5 = lVar5 + 1;
      if (cVar2 != '\0') {
        cVar6 = cVar2;
      }
    } while ((int)lVar5 < (int)uVar4);
  }
  UnityEngine_GUILayout__EndHorizontal_4410100(0);
  if ((bRam0000000004f9c746 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba868);
    FUN_02132f7c(PTR_DAT_04cba878);
    bRam0000000004f9c746 = 1;
  }
  if (cVar6 != '\0') {
    uVar3 = System_Nullable_Int32Enum___get_Value_2bcbf74
                      (&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_04cba878);
    Dino_BusSand_Cheat_CheatManager__Run_2362fe4(param_1,uVar3);
  }
  return;
}

