/* IL2CPP: Dino.BusSand.App.Meta.HallQueue$$Add
void Dino_BusSand_App_Meta_HallQueue__Add (Dino_BusSand_App_Meta_HallQueue_o* __this, int32_t priority, System_String_o* name, System_Func_IEnumerator__o* run, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.HallQueue$$Add
   void Dino_BusSand_App_Meta_HallQueue__Add (Dino_BusSand_App_Meta_HallQueue_o* __this, int32_t
   priority, System_String_o* name, System_Func_IEnumerator__o* run, const MethodInfo* method); */

void Dino_BusSand_App_Meta_HallQueue__Add_222ca74
               (long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
                    /* try { // try from 0232ca74 to 0242ca7b has its CatchHandler @ 0232cb50 */
                    /* try { // try from 0232ca90 to 0242ca97 has its CatchHandler @ 0232cb48 */
  if ((bRam0000000004f9bef9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2e70);
    FUN_02132f7c(PTR_DAT_04cb2e78);
    FUN_02132f7c(PTR_DAT_04cb2e80);
                    /* try { // try from 0232cad0 to 0242caf7 has its CatchHandler @ 0232cb64 */
    FUN_02132f7c(PTR_DAT_04cb2e88);
    FUN_02132f7c(PTR_DAT_04cb2e90);
    bRam0000000004f9bef9 = 1;
  }
  puVar4 = PTR_DAT_04cb2e88;
  puVar3 = PTR_DAT_04cb2e78;
  puVar2 = PTR_DAT_04cb2e70;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
                    /* try { // try from 0232caf8 to 0242cb2f has its CatchHandler @ 0232c9b0 */
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 0232cb30 to 0242cb33 has its CatchHandler @ 0232cb54 */
    System_Collections_Generic_List_HallQueue_Cmd___GetEnumerator_3b3e3ac
              (&uStack_c0,*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_04cb2e90);
                    /* try { // try from 0232cb34 to 0242cb3b has its CatchHandler @ 0232cb64 */
    uStack_70 = 0;
    puStack_68 = &uStack_c0;
                    /* try { // try from 0232cb3c to 0242cb43 has its CatchHandler @ 0232cb4c */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0232ca48 with catch @ 0232cb44
                       try { // try from 0232cb44 to 0242cb7b has its CatchHandler @ 0232c9b0 */
    while (uVar5 = System_Collections_Generic_List_Enumerator_HallQueue_Cmd___MoveNext_3611124
                             (&uStack_c0,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0232ca90 with catch @ 0232cb48
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0232cb3c with catch @ 0232cb4c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0232ca74 with catch @ 0232cb50
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0232cb30 with catch @ 0232cb54
                        */
      uVar5 = System_String__op_Equality_46d1108(uStack_a8,param_3,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0232ca4c with catch @ 0232cb58
                        */
      if ((uVar5 & 1) != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0232cad0 with catch @ 0232cb64
                       catch(type#1 @ 049bb748) { ... } // from try @ 0232cb34 with catch @ 0232cb64
                        */
        System_Collections_Generic_List_Enumerator_HallQueue_Cmd___Dispose_3611120
                  (&uStack_c0,*(undefined8 *)puVar2);
        return;
      }
    }
    System_Collections_Generic_List_Enumerator_HallQueue_Cmd___Dispose_3611120
              (&uStack_c0,*(undefined8 *)puVar2);
                    /* try { // try from 0232cb7c to 0242cb93 has its CatchHandler @ 0232cc10 */
    lVar8 = *(long *)(param_1 + 0x10);
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_e0 = (ulong)param_2;
    uStack_d8 = param_3;
                    /* try { // try from 0232cb94 to 0242cbff has its CatchHandler @ 0232c9b0 */
    thunk_FUN_02134474((ulong)&uStack_e0 | 8,param_3);
    uStack_d0 = param_4;
    thunk_FUN_02134474(&uStack_d0,param_4);
    uStack_c8 = CONCAT44(uStack_c8._4_4_,*(int *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    if (lVar8 != 0) {
      lVar6 = *(long *)(lVar8 + 0x10);
      lVar7 = *(long *)puVar4;
      uStack_88 = uStack_d8;
      uStack_90 = uStack_e0;
      uStack_78 = uStack_c8;
      uStack_80 = uStack_d0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar1 * 0x20;
                    /* try { // try from 0232cc00 to 0242cc0f has its CatchHandler @ 0232cc10 */
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + 0x28) = uStack_d8;
          *(ulong *)(lVar6 + 0x20) = uStack_e0;
          *(undefined8 *)(lVar6 + 0x38) = uStack_c8;
          *(undefined8 *)(lVar6 + 0x30) = uStack_d0;
          thunk_FUN_02134474(lVar6 + 0x28,0);
          return;
                    /* catch() { ... } // from try @ 0232cb7c with catch @ 0232cc10
                       catch() { ... } // from try @ 0232cc00 with catch @ 0232cc10 */
        }
                    /* try { // try from 0232cc14 to 0242cc17 has its CatchHandler @ 0232cc20 */
                    /* try { // try from 0232cc18 to 0242cc23 has its CatchHandler @ 0232c9b0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0232cc14 with catch @ 0232cc20
                        */
        puStack_68 = (undefined8 *)uStack_d8;
        uStack_70 = uStack_e0;
        uStack_58 = uStack_c8;
        uStack_60 = uStack_d0;
        System_Collections_Generic_List_HallQueue_Cmd___AddWithResize_3b3d888
                  (lVar8,&uStack_70,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

