/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Build
void Dino_BusSand_View_MechanicLayer__Build (Dino_BusSand_View_MechanicLayer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Build
   void Dino_BusSand_View_MechanicLayer__Build (Dino_BusSand_View_MechanicLayer_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__Build_23bf368(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  if ((bRam0000000004f9c9c2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd040);
    FUN_02132f7c(PTR_DAT_04cbd048);
    FUN_02132f7c(PTR_DAT_04cab9e0);
                    /* try { // try from 024bf3bc to 025bf3e3 has its CatchHandler @ 024bf654 */
    FUN_02132f7c(PTR_DAT_04cbc470);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cbc480);
    FUN_02132f7c(PTR_DAT_04cbd050);
    FUN_02132f7c(PTR_DAT_04cbc488);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cbd058);
    FUN_02132f7c(PTR_DAT_04cab9f8);
                    /* try { // try from 024bf420 to 025bf44b has its CatchHandler @ 024bf650 */
    FUN_02132f7c(PTR_DAT_04cbd060);
    FUN_02132f7c(PTR_DAT_04cbc4a0);
    FUN_02132f7c(PTR_DAT_04cbd068);
    FUN_02132f7c(PTR_DAT_04cbd070);
    bRam0000000004f9c9c2 = 1;
  }
  puVar2 = PTR_DAT_04cbd070;
  lVar16 = *(long *)(param_1 + 0x20);
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_58 = 0;
                    /* try { // try from 024bf480 to 025bf49f has its CatchHandler @ 024bf64c */
  if (((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) &&
     (lVar18 = *(long *)(*(long *)(lVar16 + 0x10) + 0x30), lVar18 != 0)) {
    lVar11 = *(long *)(lVar18 + 0x28);
    if (lVar11 == 0) {
LAB_024bf4d8:
      puVar10 = PTR_DAT_04cbd060;
      puVar9 = PTR_DAT_04cbd050;
      puVar8 = PTR_DAT_04cbd048;
      puVar7 = PTR_DAT_04cbd040;
      puVar6 = PTR_DAT_04cbc480;
      puVar5 = PTR_DAT_04cbc470;
      puVar4 = PTR_DAT_04cab9f8;
      puVar3 = PTR_DAT_04cab9e8;
      puVar2 = PTR_DAT_04cab9e0;
                    /* try { // try from 024bf4d8 to 025bf4e7 has its CatchHandler @ 024bf634 */
      if (*(long *)(lVar16 + 0x40) != 0) {
                    /* try { // try from 024bf4f0 to 025bf4fb has its CatchHandler @ 024bf62c */
                    /* try { // try from 024bf500 to 025bf50b has its CatchHandler @ 024bf620 */
                    /* try { // try from 024bf520 to 025bf52b has its CatchHandler @ 024bf61c */
                    /* try { // try from 024bf538 to 025bf53b has its CatchHandler @ 024bf644 */
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_d0,*(long *)(lVar16 + 0x40),*(undefined8 *)PTR_DAT_04cbc4a0);
                    /* try { // try from 024bf53c to 025bf5ff has its CatchHandler @ 024bf208 */
        uStack_70 = uStack_c0;
        puStack_78 = puStack_c8;
        uStack_80 = uStack_d0;
        uStack_d0 = 0;
        puStack_c8 = &uStack_80;
        while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                  (&uStack_80,*(undefined8 *)puVar6), (uVar13 & 1) != 0) {
          Dino_BusSand_View_MechanicLayer__BuildLane_23c028c(param_1,uStack_70);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)puVar5);
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x38), lVar16 != 0)) {
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_d0,lVar16,*(undefined8 *)puVar10);
          uStack_90 = uStack_c0;
          puStack_98 = puStack_c8;
          uStack_a0 = uStack_d0;
          uStack_d0 = 0;
          puStack_c8 = &uStack_a0;
          while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                    (&uStack_a0,*(undefined8 *)puVar9), (uVar13 & 1) != 0) {
            Dino_BusSand_View_MechanicLayer__BuildLift_23c0bb0(param_1,uStack_90);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_a0,*(undefined8 *)puVar8);
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar16 != 0)) {
            uStack_58 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(lVar16,0);
                    /* try { // try from 024bf600 to 025bf607 has its CatchHandler @ 024bf648 */
                    /* try { // try from 024bf608 to 025bf60b has its CatchHandler @ 024bf63c */
                    /* try { // try from 024bf60c to 025bf60f has its CatchHandler @ 024bf630 */
            Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                      (&uStack_b8,&uStack_58,*(undefined8 *)puVar4);
                    /* try { // try from 024bf610 to 025bf613 has its CatchHandler @ 024bf628 */
            uStack_d0 = 0;
            puStack_c8 = &uStack_b8;
                    /* try { // try from 024bf614 to 025bf66f has its CatchHandler @ 024bf208 */
                    /* catch() { ... } // from try @ 024bf520 with catch @ 024bf61c */
                    /* catch() { ... } // from try @ 024bf500 with catch @ 024bf620 */
            while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                      (&uStack_b8,*(undefined8 *)puVar3), (uVar13 & 1) != 0) {
                    /* catch() { ... } // from try @ 024bf4d4 with catch @ 024bf624 */
                    /* catch() { ... } // from try @ 024bf610 with catch @ 024bf628 */
                    /* catch() { ... } // from try @ 024bf4f0 with catch @ 024bf62c */
              Dino_BusSand_View_MechanicLayer__Decorate_23c13b0(param_1,uStack_a8);
                    /* catch() { ... } // from try @ 024bf60c with catch @ 024bf630 */
            }
                    /* catch() { ... } // from try @ 024bf4d8 with catch @ 024bf634 */
                    /* catch() { ... } // from try @ 024bf4bc with catch @ 024bf638 */
                    /* catch() { ... } // from try @ 024bf608 with catch @ 024bf63c */
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_b8,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 024bf4a0 with catch @ 024bf640 */
                    /* catch() { ... } // from try @ 024bf538 with catch @ 024bf644 */
                    /* catch() { ... } // from try @ 024bf600 with catch @ 024bf648 */
            uVar14 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
                    /* catch() { ... } // from try @ 024bf480 with catch @ 024bf64c */
                    /* catch() { ... } // from try @ 024bf420 with catch @ 024bf650 */
            uVar12 = *(undefined8 *)(param_1 + 0x20);
            uVar1 = *(undefined8 *)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 024bf3bc with catch @ 024bf654 */
            uVar19 = *(undefined8 *)(param_1 + 0x30);
            uVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
                    /* try { // try from 024bf670 to 025bf673 has its CatchHandler @ 024bf67c */
                    /* catch() { ... } // from try @ 024bf670 with catch @ 024bf67c */
            Dino_BusSand_View_ChainRig___ctor_2390cd0(uVar15,uVar14,uVar12,uVar1,uVar19,0);
                    /* try { // try from 024bf680 to 025bf687 has its CatchHandler @ 024bf690 */
            *(undefined8 *)(param_1 + 0x68) = uVar15;
                    /* try { // try from 024bf688 to 025bf693 has its CatchHandler @ 024bf208 */
            thunk_FUN_02134474((undefined8 *)(param_1 + 0x68),uVar15);
                    /* catch() { ... } // from try @ 024bf680 with catch @ 024bf690 */
            return;
          }
        }
      }
    }
    else {
      iVar17 = 0;
      do {
                    /* try { // try from 024bf4a0 to 025bf4af has its CatchHandler @ 024bf640 */
        if (*(int *)(lVar11 + 0x18) <= iVar17) {
          lVar16 = *(long *)(param_1 + 0x20);
                    /* try { // try from 024bf4d4 to 025bf4d7 has its CatchHandler @ 024bf624 */
          if (lVar16 != 0) goto LAB_024bf4d8;
          break;
        }
        uVar12 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar11,iVar17,*(undefined8 *)puVar2);
                    /* try { // try from 024bf4bc to 025bf4c3 has its CatchHandler @ 024bf638 */
        Dino_BusSand_View_MechanicLayer__BuildObject_23bf794(param_1,iVar17,uVar12);
        lVar11 = *(long *)(lVar18 + 0x28);
        iVar17 = iVar17 + 1;
      } while (lVar11 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

