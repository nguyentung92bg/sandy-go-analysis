/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$ParseRewards
System_Collections_Generic_List_PassportFeature_Reward__o* Dino_BusSand_App_Meta_PassportFeature__ParseRewards (Il2CppObject* grouped, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$ParseRewards
   System_Collections_Generic_List_PassportFeature_Reward__o*
   Dino_BusSand_App_Meta_PassportFeature__ParseRewards (Il2CppObject* grouped, const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_PassportFeature__ParseRewards_2244d0c(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  int aiStack_78 [2];
  long lStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_04cb0390;
  puVar2 = PTR_DAT_04cb0388;
                    /* try { // try from 02344d20 to 02444d2b has its CatchHandler @ 023450d4 */
                    /* try { // try from 02344d3c to 02444d3f has its CatchHandler @ 023450e4 */
                    /* try { // try from 02344d44 to 02444d4f has its CatchHandler @ 023450bc */
  if ((bRam0000000004f9bf41 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb20a8);
    FUN_02132f7c(PTR_DAT_04cb20b0);
    FUN_02132f7c(PTR_DAT_04cb20b8);
                    /* try { // try from 02344d70 to 02444d7f has its CatchHandler @ 023450d4 */
    FUN_02132f7c(PTR_DAT_04cb39b8);
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04cb0388);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04cb0390);
    bRam0000000004f9bf41 = 1;
  }
                    /* try { // try from 02344dc0 to 02444de7 has its CatchHandler @ 023450cc */
  uStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_PassportFeature_Reward____ctor_3b57a78
            (lVar9,*(undefined8 *)puVar2);
  lVar10 = Dino_BusSand_App_MiniJson__Arr_2156264(param_1,0);
  puVar5 = PTR_DAT_04cb39b8;
  puVar4 = PTR_DAT_04cb20b0;
  puVar3 = PTR_DAT_04cb20a8;
  puVar2 = PTR_DAT_04cb15c0;
  if (lVar10 != 0) {
                    /* try { // try from 02344e0c to 02444e13 has its CatchHandler @ 023450c0 */
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (aiStack_78,lVar10,*(undefined8 *)PTR_DAT_04cb20c0);
    uStack_80 = CONCAT44(uStack_64,uStack_68);
    lStack_88 = lStack_70;
                    /* try { // try from 02344e40 to 02444e9b has its CatchHandler @ 023450fc */
LAB_02344e44:
    uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                       (&uStack_90,*(undefined8 *)puVar4);
    if ((uVar11 & 1) != 0) {
      lVar10 = Dino_BusSand_App_MiniJson__Arr_2156264(uStack_80,0);
      if ((lVar10 != 0) && (1 < *(int *)(lVar10 + 0x18))) {
        uVar12 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar10,0,*(undefined8 *)puVar2);
        iVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar12,0,0);
        uVar12 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar10,1,*(undefined8 *)puVar2);
        lVar13 = Dino_BusSand_App_MiniJson__Long_2156378(uVar12,0,0);
        if ((0 < iVar7) && (0 < lVar13)) {
          bVar6 = false;
                    /* try { // try from 02344ed0 to 02444edb has its CatchHandler @ 023450b8 */
          if (2 < *(int *)(lVar10 + 0x18)) {
                    /* try { // try from 02344ee8 to 02444ef7 has its CatchHandler @ 023450b4 */
            uVar12 = System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar10,2,*(undefined8 *)puVar2);
            iVar8 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar12,0,0);
            bVar6 = iVar8 != 0;
          }
          if (lVar9 != 0) {
            lVar10 = *(long *)(lVar9 + 0x10);
                    /* try { // try from 02344f0c to 02444f1b has its CatchHandler @ 023450fc */
            lVar14 = *(long *)puVar5;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                    /* try { // try from 02344f38 to 02444f43 has its CatchHandler @ 023450e0 */
                *(bool *)(lVar10 + 0x30) = bVar6;
                *(int *)(lVar10 + 0x20) = iVar7;
                *(undefined4 *)(lVar10 + 0x24) = 0;
                    /* try { // try from 02344f48 to 02444f4f has its CatchHandler @ 023450dc */
                *(long *)(lVar10 + 0x28) = lVar13;
                *(undefined4 *)(lVar10 + 0x31) = 0;
                *(undefined4 *)(lVar10 + 0x34) = 0;
              }
              else {
                uStack_64 = 0;
                aiStack_78[1] = 0;
                    /* try { // try from 02344f74 to 02444f7f has its CatchHandler @ 023450d8 */
                uStack_68 = (uint)bVar6;
                aiStack_78[0] = iVar7;
                lStack_70 = lVar13;
                System_Collections_Generic_List_PassportFeature_Reward___AddWithResize_3b58380
                          (lVar9,aiStack_78,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                    /* try { // try from 02344f8c to 02444f97 has its CatchHandler @ 02345100 */
              }
              goto LAB_02344e44;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
      goto LAB_02344e44;
    }
                    /* try { // try from 02344f98 to 024450a3 has its CatchHandler @ 02344a84 */
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_90,*(undefined8 *)puVar3);
  }
  return lVar9;
}

