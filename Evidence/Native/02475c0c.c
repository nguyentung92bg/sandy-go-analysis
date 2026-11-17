/* IL2CPP: Dino.BusSand.AudioHub$$PickClip
int32_t Dino_BusSand_AudioHub__PickClip (Dino_BusSand_AudioHub_o* __this, Dino_BusSand_AudioEventDef_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$PickClip
   int32_t Dino_BusSand_AudioHub__PickClip (Dino_BusSand_AudioHub_o* __this,
   Dino_BusSand_AudioEventDef_o* e, const MethodInfo* method); */

int Dino_BusSand_AudioHub__PickClip_2375c0c(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined8 uStack_58;
  
  if ((bRam0000000004f9c7f0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad650);
    FUN_02132f7c(PTR_DAT_04cad660);
    FUN_02132f7c(PTR_DAT_04cbb278);
    FUN_02132f7c(PTR_DAT_04cbb280);
    FUN_02132f7c(PTR_DAT_04cbb288);
    FUN_02132f7c(PTR_DAT_04cbb290);
    FUN_02132f7c(PTR_DAT_04cb1848);
    FUN_02132f7c(PTR_DAT_04cb1850);
    FUN_02132f7c(PTR_DAT_04cbb298);
    bRam0000000004f9c7f0 = 1;
  }
  uStack_58 = 0;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x80) != 0)) {
    iVar1 = *(int *)(*(long *)(param_2 + 0x80) + 0x18);
    if (iVar1 == 1) {
      return 0;
    }
                    /* try { // try from 02475cdc to 02575cdf has its CatchHandler @ 02475cfc */
                    /* try { // try from 02475ce0 to 02575ce3 has its CatchHandler @ 02475cf8 */
                    /* try { // try from 02475ce4 to 02575d27 has its CatchHandler @ 0247557c */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02475af0 with catch @ 02475ce8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02475b30 with catch @ 02475cec
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02475ad0 with catch @ 02475cf0
                        */
    uVar5 = System_String__op_Equality_46d1108
                      (*(undefined8 *)(param_2 + 0x28),*(undefined8 *)PTR_DAT_04cbb298,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02475a9c with catch @ 02475cf4
                        */
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 02475d58 to 02575d63 has its CatchHandler @ 0247557c */
      if (*(long *)(param_2 + 0x80) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02475d50 with catch @ 02475d60
                        */
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_98,*(long *)(param_2 + 0x80),*(undefined8 *)PTR_DAT_04cbb290);
        puVar2 = PTR_DAT_04cbb280;
        iVar7 = 0;
        puStack_78 = puStack_90;
        uStack_80 = uStack_98;
        lStack_70 = lStack_88;
        uStack_98 = 0;
        puStack_90 = &uStack_80;
        while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                 (&uStack_80,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
          if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          iVar11 = *(int *)(lStack_70 + 0x18);
          if (iVar11 < 2) {
            iVar11 = 1;
          }
          iVar7 = iVar11 + iVar7;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)PTR_DAT_04cbb278);
        puVar3 = PTR_DAT_04cb1850;
        puVar2 = PTR_DAT_04cad650;
        iVar11 = 0;
        iVar8 = 0;
        while( true ) {
          iVar4 = UnityEngine_Random__Range_43b64e8(0,iVar7,0);
          iVar9 = iVar8;
          if (0 < iVar1) {
            iVar10 = 0;
            do {
              if ((*(long *)(param_2 + 0x80) == 0) ||
                 (lVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                                    (*(long *)(param_2 + 0x80),iVar10,*(undefined8 *)puVar3),
                 lVar6 == 0)) goto LAB_02475ecc;
              iVar9 = *(int *)(lVar6 + 0x18);
              if (iVar9 < 2) {
                iVar9 = 1;
              }
              iVar4 = iVar4 - iVar9;
              iVar9 = iVar10;
            } while ((-1 < iVar4) && (iVar10 = iVar10 + 1, iVar9 = iVar8, iVar1 != iVar10));
          }
          if (*(char *)(param_2 + 0x54) == '\0') break;
          if (*(long *)(param_1 + 0x50) == 0) goto LAB_02475ecc;
          uVar5 = System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
                            (*(long *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x10),&uStack_58,
                             *(undefined8 *)puVar2);
          if ((((uVar5 & 1) == 0) || ((int)uStack_58 != iVar9)) ||
             (iVar11 = iVar11 + 1, iVar8 = iVar9, iVar11 == 4)) break;
        }
        if (*(long *)(param_1 + 0x50) != 0) {
          System_Collections_Generic_Dictionary_object__int___set_Item_34a9908
                    (*(long *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x10),iVar9,
                     *(undefined8 *)PTR_DAT_04cad660);
          return iVar9;
        }
      }
    }
    else {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02475ce0 with catch @ 02475cf8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02475cdc with catch @ 02475cfc
                        */
      if (*(long *)(param_1 + 0x58) != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02475a38 with catch @ 02475d00
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02475a6c with catch @ 02475d04
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02475ab4 with catch @ 02475d08
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02475a4c with catch @ 02475d0c
                        */
        System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
                  (*(long *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x10),(long)&uStack_58 + 4,
                   *(undefined8 *)PTR_DAT_04cad650);
        if (*(long *)(param_1 + 0x58) != 0) {
                    /* try { // try from 02475d28 to 02575d2b has its CatchHandler @ 02475d4c */
                    /* try { // try from 02475d2c to 02575d4f has its CatchHandler @ 0247557c */
          iVar7 = 0;
          if (iVar1 != 0) {
            iVar7 = (uStack_58._4_4_ + 1) / iVar1;
          }
          System_Collections_Generic_Dictionary_object__int___set_Item_34a9908
                    (*(long *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x10),
                     (uStack_58._4_4_ + 1) - iVar7 * iVar1,*(undefined8 *)PTR_DAT_04cad660);
          iVar7 = 0;
          if (iVar1 != 0) {
            iVar7 = uStack_58._4_4_ / iVar1;
          }
                    /* catch() { ... } // from try @ 02475d28 with catch @ 02475d4c */
          return uStack_58._4_4_ - iVar7 * iVar1;
                    /* try { // try from 02475d50 to 02575d57 has its CatchHandler @ 02475d60 */
        }
      }
    }
  }
LAB_02475ecc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

