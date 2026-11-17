/* IL2CPP: Dino.BusSand.App.QaPilot$$WorstTap
int32_t Dino_BusSand_App_QaPilot__WorstTap (Dino_BusSand_Core_StageEngine_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot$$WorstTap
   int32_t Dino_BusSand_App_QaPilot__WorstTap (Dino_BusSand_Core_StageEngine_o* e, const MethodInfo*
   method); */

undefined4 Dino_BusSand_App_QaPilot__WorstTap_21574a8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9b7eb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9d8);
    FUN_02132f7c(PTR_DAT_04cab9e0);
                    /* try { // try from 022574ec to 023574fb has its CatchHandler @ 02257634 */
    FUN_02132f7c(PTR_DAT_04cab9e8);
                    /* try { // try from 022574fc to 0235752b has its CatchHandler @ 02257474 */
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9b7eb = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_48 = 0;
                    /* try { // try from 0225752c to 02357533 has its CatchHandler @ 0225762c */
  uStack_78 = 0;
                    /* try { // try from 02257534 to 0235754b has its CatchHandler @ 02257474 */
  if ((param_1 == 0) || (*(char *)(param_1 + 0x80) != '\0')) {
    return 0xffffffff;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar7 = Dino_BusSand_Core_Road__get_IsFull_24121b8(*(long *)(param_1 + 0x20),0);
                    /* try { // try from 0225754c to 0235755b has its CatchHandler @ 0225762c */
    if ((uVar7 & 1) != 0) {
      return 0xffffffff;
    }
                    /* try { // try from 02257574 to 02357587 has its CatchHandler @ 02257630 */
    lVar9 = *(long *)(param_1 + 0x18);
    if ((lVar9 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
                    /* try { // try from 02257588 to 023575f7 has its CatchHandler @ 02257474 */
      iVar6 = *(int *)(lVar9 + 0x14);
      iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x3c);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = System_Math__Min_4831118(iVar6 + -1,iVar1 + 0x1c,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        uStack_48 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(*(long *)(param_1 + 0x28),0);
        Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                  (&uStack_90,&uStack_48,*(undefined8 *)PTR_DAT_04cab9f8);
        puVar3 = PTR_DAT_04cab9e8;
        puVar2 = PTR_DAT_04cab9d8;
                    /* try { // try from 022575f8 to 02357607 has its CatchHandler @ 0225762c */
        uVar8 = 0xffffffff;
        uStack_68 = puStack_88;
        uStack_70 = uStack_90;
        lVar10 = 0x7fffffffffffffff;
                    /* try { // try from 02257608 to 0235764f has its CatchHandler @ 02257474 */
        lStack_60 = lStack_80;
        uStack_90 = 0;
        puStack_88 = &uStack_70;
        while( true ) {
          uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_70,*(undefined8 *)puVar3);
          lVar4 = lStack_60;
          if ((uVar7 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_70,*(undefined8 *)PTR_DAT_04cab9e0);
            return uVar8;
          }
                    /* catch() { ... } // from try @ 0225752c with catch @ 0225762c
                       catch() { ... } // from try @ 0225754c with catch @ 0225762c
                       catch() { ... } // from try @ 022575f8 with catch @ 0225762c */
          if (lStack_60 == 0) break;
                    /* catch() { ... } // from try @ 02257574 with catch @ 02257630 */
                    /* catch() { ... } // from try @ 022574ec with catch @ 02257634 */
          if ((*(char *)(lStack_60 + 0x44) == '\0') && (*(int *)(lStack_60 + 0x40) < 1)) {
            if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar7 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c
                              (*(long *)(param_1 + 0x28),lStack_60,0);
            if ((uVar7 & 1) != 0) {
              if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar7 = System_Collections_Generic_Dictionary_int__TruckPayload___TryGetValue_3446abc
                                (*(long *)(param_1 + 0x50),*(undefined4 *)(lVar4 + 0x10),&uStack_78,
                                 *(undefined8 *)puVar2);
              if (((uVar7 & 1) != 0) &&
                 (iVar6 = Dino_BusSand_Core_SandGrid__CountOf_2417b60
                                    (lVar9,uStack_78 & 0xff,0,*(int *)(lVar9 + 0x10) + -1,0,uVar5,0)
                 , iVar6 < lVar10)) {
                lVar10 = (long)iVar6;
                uVar8 = *(undefined4 *)(lVar4 + 0x10);
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

