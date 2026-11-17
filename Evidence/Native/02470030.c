/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$Print
System_String_o* Dino_BusSand_Cheat_QaJourney__Print (Dino_BusSand_App_UI_UIPanel_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$Print
   System_String_o* Dino_BusSand_Cheat_QaJourney__Print (Dino_BusSand_App_UI_UIPanel_o* p, const
   MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_QaJourney__Print_2370030(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uStack_24;
  
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c7ce & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad950);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cba760);
                    /* try { // try from 02470080 to 02570083 has its CatchHandler @ 0247095c */
    FUN_02132f7c(PTR_DAT_04ca9c30);
                    /* try { // try from 02470084 to 02570087 has its CatchHandler @ 02470970 */
                    /* try { // try from 02470088 to 0257008f has its CatchHandler @ 0247096c */
    bRam0000000004f9c7ce = 1;
  }
  uStack_24 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 0247009c to 025700b7 has its CatchHandler @ 024709ec */
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar4 & 1) == 0) {
    uStack_24 = 0;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                      (param_1,0,*(undefined8 *)PTR_DAT_04cad950);
    if (lVar6 == 0) {
      uStack_24 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uStack_24 = *(uint *)(lVar6 + 0x18);
    uVar1 = uStack_24 & ((int)uStack_24 >> 0x1f ^ 0xffffffffU);
    uVar2 = uStack_24;
    uVar8 = uVar1;
    if (0 < (int)uStack_24) {
      do {
        if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar8 = uVar8 - 1;
        uVar2 = uVar2 - 1;
      } while (uVar8 != 0);
    }
    uStack_24 = uVar1;
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0x28) + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = System_Boolean__ToString_47b93d0(param_1 + 0x2c,0);
    uVar7 = System_Int32__ToString_482d750(&uStack_24,0);
    uVar5 = System_String__Concat_46d2b84(uVar5,*(undefined8 *)PTR_DAT_04cba760,uVar7,0);
  }
  else {
                    /* try { // try from 024700b8 to 025709ab has its CatchHandler @ 0246fa7c */
    uVar5 = *(undefined8 *)PTR_DAT_04ca9c30;
  }
  return uVar5;
}

