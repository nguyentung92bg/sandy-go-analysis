/* IL2CPP: Dino.BusSand.App.Meta.Profile$$GrantRewardList
void Dino_BusSand_App_Meta_Profile__GrantRewardList (Il2CppObject* list, System_String_o* reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$GrantRewardList
   void Dino_BusSand_App_Meta_Profile__GrantRewardList (Il2CppObject* list, System_String_o* reason,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__GrantRewardList_22731bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
                    /* try { // try from 023731c8 to 024731cf has its CatchHandler @ 023732d0 */
                    /* try { // try from 023731d8 to 024731e7 has its CatchHandler @ 023732d4 */
  if ((bRam0000000004f9c104 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb20a8);
                    /* try { // try from 023731f4 to 024731fb has its CatchHandler @ 023732cc */
    FUN_02132f7c(PTR_DAT_04cb20b0);
                    /* try { // try from 02373208 to 0247320b has its CatchHandler @ 023732c4 */
    FUN_02132f7c(PTR_DAT_04cb20b8);
                    /* try { // try from 02373210 to 0247323f has its CatchHandler @ 023732d8 */
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* try { // try from 02373240 to 024732bf has its CatchHandler @ 02372d7c */
    bRam0000000004f9c104 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lVar7 = Dino_BusSand_App_MiniJson__Arr_2156264(param_1,0);
  puVar4 = PTR_DAT_04cb20b0;
  puVar3 = PTR_DAT_04cb20a8;
  puVar2 = PTR_DAT_04cb15c0;
  puVar1 = PTR_DAT_04cabaf8;
  if (lVar7 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_88,lVar7,*(undefined8 *)PTR_DAT_04cb20c0);
    uStack_60 = uStack_78;
    uStack_68 = puStack_80;
    uStack_70 = uStack_88;
    uStack_88 = 0;
    puStack_80 = &uStack_70;
LAB_023732a8:
    uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_70,*(undefined8 *)puVar4);
    if ((uVar8 & 1) != 0) {
                    /* try { // try from 023732c0 to 024732c3 has its CatchHandler @ 023732c8 */
      lVar7 = Dino_BusSand_App_MiniJson__Arr_2156264(uStack_60,0);
                    /* catch() { ... } // from try @ 02373208 with catch @ 023732c4
                       try { // try from 023732c4 to 024732f3 has its CatchHandler @ 02372d7c */
                    /* catch() { ... } // from try @ 023732c0 with catch @ 023732c8 */
                    /* catch() { ... } // from try @ 023731f4 with catch @ 023732cc */
                    /* catch() { ... } // from try @ 023731c8 with catch @ 023732d0 */
                    /* catch() { ... } // from try @ 023731d8 with catch @ 023732d4 */
      if ((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x18))) {
                    /* catch() { ... } // from try @ 02373210 with catch @ 023732d8 */
        uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar7,0,*(undefined8 *)puVar2);
        iVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
                    /* try { // try from 023732f4 to 024732f7 has its CatchHandler @ 02373318 */
                    /* try { // try from 023732f8 to 0247331b has its CatchHandler @ 02372d7c */
        uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar7,1,*(undefined8 *)puVar2);
        uVar9 = Dino_BusSand_App_MiniJson__Long_2156378(uVar9,0,0);
                    /* catch() { ... } // from try @ 023732f4 with catch @ 02373318 */
                    /* try { // try from 0237331c to 02473323 has its CatchHandler @ 0237332c */
        if (2 < *(int *)(lVar7 + 0x18)) {
                    /* try { // try from 02373324 to 0247332f has its CatchHandler @ 02372d7c */
                    /* catch() { ... } // from try @ 023730a8 with catch @ 0237332c
                       catch() { ... } // from try @ 0237331c with catch @ 0237332c */
          uVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                             (lVar7,2,*(undefined8 *)puVar2);
          iVar6 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar10,0,0);
                    /* catch() { ... } // from try @ 02373368 with catch @ 02373340
                       catch() { ... } // from try @ 02373398 with catch @ 02373340
                       catch() { ... } // from try @ 02373420 with catch @ 02373340
                       catch() { ... } // from try @ 0237342c with catch @ 02373340 */
          if (iVar6 != 0) {
            if (iVar5 == 0x3ea) {
                    /* try { // try from 02373354 to 02473367 has its CatchHandler @ 02373368 */
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Meta_Profile__AddInfiniteHearts_2273010(uVar9,param_2);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02373354 with catch @ 02373368
                       try { // try from 02373368 to 0247337f has its CatchHandler @ 02373340 */
            }
            goto LAB_023732a8;
          }
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 02373380 to 02473397 has its CatchHandler @ 02373424 */
        Dino_BusSand_App_Meta_Profile__Add_2272578(iVar5,uVar9,param_2);
      }
      goto LAB_023732a8;
    }
                    /* try { // try from 02373398 to 0247340f has its CatchHandler @ 02373340 */
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_70,*(undefined8 *)puVar3);
  }
  return;
}

