/* IL2CPP: Dino.BusSand.Core.ColorShuffle$$Seats
System_Collections_Generic_List_ColorShuffle_Seat__o* Dino_BusSand_Core_ColorShuffle__Seats (Dino_BusSand_Core_StageEngine_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.ColorShuffle$$Seats
   System_Collections_Generic_List_ColorShuffle_Seat__o* Dino_BusSand_Core_ColorShuffle__Seats
   (Dino_BusSand_Core_StageEngine_o* e, const MethodInfo* method); */

long Dino_BusSand_Core_ColorShuffle__Seats_240d784(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  byte bStack_98;
  undefined2 uStack_97;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar5 = PTR_DAT_04cbe418;
  puVar4 = PTR_DAT_04cbe410;
                    /* try { // try from 0250d798 to 0260d79f has its CatchHandler @ 0250d7d0 */
                    /* try { // try from 0250d7a0 to 0260d7c7 has its CatchHandler @ 0250d664 */
  if ((bRam0000000004f9cb30 & 1) == 0) {
                    /* try { // try from 0250d7c8 to 0260d7cb has its CatchHandler @ 0250d7d4 */
    FUN_02132f7c(PTR_DAT_04cab9d8);
                    /* try { // try from 0250d7cc to 0260d7f3 has its CatchHandler @ 0250d664 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250d798 with catch @ 0250d7d0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250d7c8 with catch @ 0250d7d4
                        */
    FUN_02132f7c(PTR_DAT_04cab9e0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250d778 with catch @ 0250d7d8
                        */
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
                    /* try { // try from 0250d7f4 to 0260d7f7 has its CatchHandler @ 0250d818 */
                    /* try { // try from 0250d7f8 to 0260d81b has its CatchHandler @ 0250d664 */
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04cbe420);
    FUN_02132f7c(PTR_DAT_04cbe418);
                    /* catch() { ... } // from try @ 0250d7f4 with catch @ 0250d818 */
                    /* try { // try from 0250d81c to 0260d823 has its CatchHandler @ 0250d82c */
    FUN_02132f7c(PTR_DAT_04cbe410);
                    /* try { // try from 0250d824 to 0260d82f has its CatchHandler @ 0250d664 */
    bRam0000000004f9cb30 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0250d81c with catch @ 0250d82c
                        */
  uStack_80 = 0;
  uStack_78 = 0;
                    /* try { // try from 0250d830 to 0260d8d3 has its CatchHandler @ 0250d830
                       catch() { ... } // from try @ 0250d830 with catch @ 0250d830
                       catch() { ... } // from try @ 0250d900 with catch @ 0250d830
                       catch() { ... } // from try @ 0250d91c with catch @ 0250d830
                       catch() { ... } // from try @ 0250d948 with catch @ 0250d830
                       catch() { ... } // from try @ 0250d990 with catch @ 0250d830 */
  lStack_70 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_ColorShuffle_Seat____ctor_3b1f7d0(lVar10,*(undefined8 *)puVar5);
  puVar7 = PTR_DAT_04cbe420;
  puVar6 = PTR_DAT_04cab9f8;
  puVar5 = PTR_DAT_04cab9e8;
  puVar4 = PTR_DAT_04cab9d8;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x28) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uStack_88 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(*(long *)(param_1 + 0x28),0);
  Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
            (&uStack_a8,&uStack_88,*(undefined8 *)puVar6);
  lStack_70 = CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT21(uStack_97,bStack_98)));
  uStack_78 = uStack_a0;
  while( true ) {
    do {
      do {
        do {
          uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_80,*(undefined8 *)puVar5);
          lVar12 = lStack_70;
          if ((uVar11 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_80,*(undefined8 *)PTR_DAT_04cab9e0);
            return lVar10;
          }
          uVar11 = Dino_BusSand_Core_StageEngine__IsMechanicVehicle_2429114(param_1,lStack_70,0);
                    /* try { // try from 0250d8d4 to 0260d8db has its CatchHandler @ 0250d928 */
        } while ((uVar11 & 1) != 0);
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar11 = Dino_BusSand_Core_TruckGrid__CrossesGate_242cd98
                           (*(long *)(param_1 + 0x28),lVar12,0);
      } while ((uVar11 & 1) != 0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* try { // try from 0250d8f8 to 0260d8ff has its CatchHandler @ 0250d920 */
      if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* try { // try from 0250d900 to 0260d917 has its CatchHandler @ 0250d830 */
      uVar11 = System_Collections_Generic_Dictionary_int__TruckPayload___TryGetValue_3446abc
                         (*(long *)(param_1 + 0x50),*(undefined4 *)(lVar12 + 0x10),&uStack_90,
                          *(undefined8 *)puVar4);
      uVar8 = uStack_90;
    } while ((uVar11 & 1) == 0);
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 0250d918 to 0260d91b has its CatchHandler @ 0250d924 */
    uVar1 = *(undefined4 *)(lVar12 + 0x10);
                    /* try { // try from 0250d91c to 0260d943 has its CatchHandler @ 0250d830 */
    uVar2 = *(undefined4 *)(lVar12 + 0x2c);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250d8f8 with catch @ 0250d920
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250d918 with catch @ 0250d924
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250d8d4 with catch @ 0250d928
                        */
    bVar9 = Dino_BusSand_Core_TruckGrid__CanEscape_2423be4(*(long *)(param_1 + 0x28),lVar12,0);
    if (lVar10 == 0) break;
    lVar12 = *(long *)(lVar10 + 0x10);
    lVar13 = *(long *)puVar7;
                    /* try { // try from 0250d944 to 0260d947 has its CatchHandler @ 0250d984 */
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    /* try { // try from 0250d948 to 0260d987 has its CatchHandler @ 0250d830 */
    if (lVar12 == 0) break;
    uVar3 = *(uint *)(lVar10 + 0x18);
    if (uVar3 < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (long)(int)uVar3 * 0x14;
      *(uint *)(lVar10 + 0x18) = uVar3 + 1;
      *(undefined4 *)(lVar12 + 0x20) = uVar1;
      *(undefined4 *)(lVar12 + 0x24) = uVar2;
      *(undefined8 *)(lVar12 + 0x28) = uVar8;
      *(byte *)(lVar12 + 0x30) = bVar9 & 1;
      *(undefined2 *)(lVar12 + 0x31) = 0;
      *(undefined1 *)(lVar12 + 0x33) = 0;
    }
    else {
                    /* catch() { ... } // from try @ 0250d944 with catch @ 0250d984 */
                    /* try { // try from 0250d988 to 0260d98f has its CatchHandler @ 0250d998 */
                    /* try { // try from 0250d990 to 0260d99b has its CatchHandler @ 0250d830 */
      uStack_a0 = uVar8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0250d988 with catch @ 0250d998
                        */
      uStack_97 = 0;
      uStack_95 = 0;
      uStack_a8 = uVar1;
      uStack_a4 = uVar2;
      bStack_98 = bVar9 & 1;
      System_Collections_Generic_List_ColorShuffle_Seat___AddWithResize_3b200d8
                (lVar10,&uStack_a8,
                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

