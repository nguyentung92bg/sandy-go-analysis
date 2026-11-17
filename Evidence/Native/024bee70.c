/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnDestroy
void Dino_BusSand_View_MechanicLayer__OnDestroy (Dino_BusSand_View_MechanicLayer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnDestroy
   void Dino_BusSand_View_MechanicLayer__OnDestroy (Dino_BusSand_View_MechanicLayer_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__OnDestroy_23bee70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  if ((bRam0000000004f9c9c0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbcff0);
    FUN_02132f7c(PTR_DAT_04cbcff8);
    FUN_02132f7c(PTR_DAT_04cbd000);
    FUN_02132f7c(PTR_DAT_04cbd008);
    FUN_02132f7c(PTR_DAT_04cbd010);
    FUN_02132f7c(PTR_DAT_04cbd018);
    FUN_02132f7c(PTR_DAT_04cbd020);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cbd028);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd030);
    bRam0000000004f9c9c0 = 1;
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  lStack_90 = 0;
  Dino_BusSand_Tween__KillAll_238c648(param_1,0);
                    /* try { // try from 024bef50 to 025befb7 has its CatchHandler @ 024bef50
                       catch() { ... } // from try @ 024bef50 with catch @ 024bef50
                       catch() { ... } // from try @ 024bf0ec with catch @ 024bef50
                       catch() { ... } // from try @ 024bf148 with catch @ 024bef50
                       catch() { ... } // from try @ 024bf1ac with catch @ 024bef50 */
  if ((*(long *)(param_1 + 0x88) != 0) &&
     (lVar8 = System_Collections_Generic_Dictionary_int__object___get_Values_3437130
                        (*(long *)(param_1 + 0x88),*(undefined8 *)PTR_DAT_04cbcff0),
     puVar7 = PTR_DAT_04cbd028, puVar6 = PTR_DAT_04cbd010, puVar5 = PTR_DAT_04cbd008,
     puVar4 = PTR_DAT_04cbd000, puVar3 = PTR_DAT_04cbcff8, puVar2 = PTR_DAT_04cad568,
     puVar1 = PTR_DAT_04ca9ae8, lVar8 != 0)) {
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator_30a9274
              (&uStack_b8,lVar8,*(undefined8 *)PTR_DAT_04cbd030);
    lStack_70 = lStack_a8;
                    /* try { // try from 024befb8 to 025befbb has its CatchHandler @ 024bf118 */
    puStack_78 = puStack_b0;
    uStack_80 = uStack_b8;
    uStack_b8 = 0;
    puStack_b0 = &uStack_80;
                    /* try { // try from 024befcc to 025befd7 has its CatchHandler @ 024bf10c */
    while (uVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext_3632698
                             (&uStack_80,*(undefined8 *)puVar5), lVar8 = lStack_70, (uVar9 & 1) != 0
          ) {
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar10 = *(undefined8 *)(lStack_70 + 0x48);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
      if ((uVar9 & 1) != 0) {
                    /* try { // try from 024bf008 to 025bf00b has its CatchHandler @ 024bf108 */
        uVar10 = *(undefined8 *)(lVar8 + 0x48);
                    /* try { // try from 024bf00c to 025bf01b has its CatchHandler @ 024bf114 */
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        UnityEngine_Object__Destroy_43c8114(uVar10,0);
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3632694
              (&uStack_80,*(undefined8 *)puVar4);
                    /* try { // try from 024bf034 to 025bf037 has its CatchHandler @ 024bf0f4 */
    if (*(long *)(param_1 + 0xd8) != 0) {
                    /* try { // try from 024bf044 to 025bf04b has its CatchHandler @ 024bf110 */
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_b8,*(long *)(param_1 + 0xd8),*(undefined8 *)puVar7);
      lStack_90 = lStack_a8;
      puStack_98 = puStack_b0;
      uStack_a0 = uStack_b8;
      uStack_b8 = 0;
      puStack_b0 = &uStack_a0;
                    /* try { // try from 024bf060 to 025bf067 has its CatchHandler @ 024bf100 */
      while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_a0,*(undefined8 *)puVar6), lVar8 = lStack_90,
            (uVar9 & 1) != 0) {
                    /* try { // try from 024bf078 to 025bf07b has its CatchHandler @ 024bf0ec */
                    /* try { // try from 024bf07c to 025bf08b has its CatchHandler @ 024bf0fc */
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
                    /* try { // try from 024bf094 to 025bf09b has its CatchHandler @ 024bf0f8 */
        if ((uVar9 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          UnityEngine_Object__Destroy_43c8114(lVar8,0);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_a0,*(undefined8 *)puVar3);
                    /* try { // try from 024bf0c4 to 025bf0d3 has its CatchHandler @ 024bf0f0 */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
                    /* try { // try from 024bf0e4 to 025bf0e7 has its CatchHandler @ 024bf104 */
                    /* try { // try from 024bf0e8 to 025bf0eb has its CatchHandler @ 024bf0f8 */
        FUN_02132f7c(PTR_DAT_04cad568);
                    /* catch() { ... } // from try @ 024bf078 with catch @ 024bf0ec
                       try { // try from 024bf0ec to 025bf12f has its CatchHandler @ 024bef50 */
                    /* catch() { ... } // from try @ 024bf0c4 with catch @ 024bf0f0 */
        cRam0000000004f9b94e = '\x01';
      }
                    /* catch() { ... } // from try @ 024bf034 with catch @ 024bf0f4 */
      lVar8 = *(long *)puVar2;
                    /* catch() { ... } // from try @ 024bf094 with catch @ 024bf0f8
                       catch() { ... } // from try @ 024bf0e8 with catch @ 024bf0f8 */
                    /* catch() { ... } // from try @ 024bf07c with catch @ 024bf0fc */
      if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 024bf060 with catch @ 024bf100 */
        thunk_FUN_0218fdac();
                    /* catch() { ... } // from try @ 024bf0e4 with catch @ 024bf104 */
        lVar8 = *(long *)puVar2;
      }
                    /* catch() { ... } // from try @ 024bf008 with catch @ 024bf108 */
                    /* catch() { ... } // from try @ 024befcc with catch @ 024bf10c */
                    /* catch() { ... } // from try @ 024bf044 with catch @ 024bf110 */
      if (**(long **)(lVar8 + 0xb8) != 0) {
                    /* catch() { ... } // from try @ 024bf00c with catch @ 024bf114 */
                    /* catch() { ... } // from try @ 024befb8 with catch @ 024bf118 */
        Dino_BusSand_GameAudio__SirenLoop_2384d8c(0,**(long **)(lVar8 + 0xb8),0,0);
      }
                    /* try { // try from 024bf130 to 025bf147 has its CatchHandler @ 024bf1a4 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024bf148 to 025bf193 has its CatchHandler @ 024bef50 */
  FUN_02133224();
}

