/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$OnLog
void Dino_BusSand_Cheat_AutoQa__OnLog (Dino_BusSand_Cheat_AutoQa_o* __this, System_String_o* message, System_String_o* stack, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$OnLog
   void Dino_BusSand_Cheat_AutoQa__OnLog (Dino_BusSand_Cheat_AutoQa_o* __this, System_String_o*
   message, System_String_o* stack, int32_t type, const MethodInfo* method); */

void Dino_BusSand_Cheat_AutoQa__OnLog_23413a0
               (long param_1,undefined8 param_2,long param_3,int param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if ((bRam0000000004f9c68a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cb95b0);
    FUN_02132f7c(PTR_DAT_04cb95b8);
    FUN_02132f7c(PTR_DAT_04cb2090);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c68a = 1;
  }
  puVar2 = PTR_DAT_04ca9c30;
  if (param_4 != 4) {
    return;
  }
  lVar4 = *(long *)PTR_DAT_04ca9c30;
  if (param_3 != 0) {
    lVar4 = param_3;
  }
  if (lVar4 != 0) {
    iVar3 = System_String__IndexOf_46d72c4(lVar4,10,0);
    if (0 < iVar3) {
      lVar4 = System_String__Substring_46d4848(lVar4,0,iVar3,0);
    }
    lVar8 = *(long *)(param_1 + 0x30);
    lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_04cb2090;
        thunk_FUN_02134474((undefined8 *)(lVar5 + 0x20));
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(param_1 + 0x20);
          thunk_FUN_02134474((undefined8 *)(lVar5 + 0x28));
                    /* try { // try from 024414d8 to 025414db has its CatchHandler @ 024414ec */
          if (2 < *(uint *)(lVar5 + 0x18)) {
                    /* try { // try from 024414dc to 025414df has its CatchHandler @ 024414e8 */
                    /* try { // try from 024414e0 to 02541513 has its CatchHandler @ 02441168 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0244137c with catch @ 024414e4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024414dc with catch @ 024414e8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024414d8 with catch @ 024414ec
                        */
            *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_04cb95b0;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024412ac with catch @ 024414f0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024412f0 with catch @ 024414f4
                        */
            thunk_FUN_02134474((undefined8 *)(lVar5 + 0x30));
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02441350 with catch @ 024414f8
                        */
            if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar5 + 0x38) = param_2;
              thunk_FUN_02134474((undefined8 *)(lVar5 + 0x38),param_2);
                    /* try { // try from 02441514 to 02541517 has its CatchHandler @ 02441530 */
              if (lVar4 != 0) {
                    /* try { // try from 02441518 to 02541533 has its CatchHandler @ 02441168 */
                if (*(int *)(lVar4 + 0x10) < 1) {
                  uVar6 = *(undefined8 *)puVar2;
                }
                else {
                  uVar6 = System_String__Trim_46d6ee0(lVar4,0);
                    /* catch() { ... } // from try @ 02441514 with catch @ 02441530 */
                    /* try { // try from 02441534 to 0254153b has its CatchHandler @ 02441544 */
                    /* try { // try from 0244153c to 02541547 has its CatchHandler @ 02441168 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02441534 with catch @ 02441544
                        */
                    /* try { // try from 02441548 to 0254161b has its CatchHandler @ 02441548
                       catch() { ... } // from try @ 02441548 with catch @ 02441548
                       catch() { ... } // from try @ 02441664 with catch @ 02441548
                       catch() { ... } // from try @ 02441690 with catch @ 02441548
                       catch() { ... } // from try @ 024416c0 with catch @ 02441548
                       catch() { ... } // from try @ 024416e4 with catch @ 02441548 */
                  uVar6 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb95b8,uVar6,0);
                }
                if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_02441610;
                *(undefined8 *)(lVar5 + 0x40) = uVar6;
                thunk_FUN_02134474();
                uVar6 = System_String__Concat_46d31f0(lVar5,0);
                if (lVar8 != 0) {
                  lVar4 = *(long *)(lVar8 + 0x10);
                  lVar5 = *(long *)PTR_DAT_04cab718;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar4 != 0) {
                    uVar1 = *(uint *)(lVar8 + 0x18);
                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                      puVar7 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                      *puVar7 = uVar6;
                    }
                    else {
                      uVar1 = *(uint *)(lVar8 + 0x18);
                      System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                                (lVar8,uVar1 + 1,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) +
                                                                          0xc0) + 0x70) + 0x20) +
                                            0xc0) + 0x78));
                      lVar4 = *(long *)(lVar8 + 0x10);
                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                      if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                        FUN_0213322c();
                      }
                      puVar7 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                      *puVar7 = uVar6;
                    }
                    if (iRam00000000051c1b10 != 0) {
                      FUN_02220bf0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                                   ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
                    }
                    return;
                  }
                }
              }
              goto LAB_02441614;
            }
          }
        }
      }
LAB_02441610:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_02441614:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

