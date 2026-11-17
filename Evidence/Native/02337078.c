/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnFinalFail
void Dino_BusSand_App_Meta_GiftPackFeature__OnFinalFail (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnFinalFail
   void Dino_BusSand_App_Meta_GiftPackFeature__OnFinalFail (Dino_BusSand_App_Meta_GiftPackFeature_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__OnFinalFail_2237078(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_04cb3390;
  if ((bRam0000000004f9beae & 1) == 0) {
                    /* try { // try from 023370a4 to 024370ab has its CatchHandler @ 02337448 */
    FUN_02132f7c(PTR_DAT_04cb3398);
    FUN_02132f7c(PTR_DAT_04cb33a0);
                    /* try { // try from 023370c0 to 024370c7 has its CatchHandler @ 02337444 */
    FUN_02132f7c(PTR_DAT_04cb33a8);
    FUN_02132f7c(PTR_DAT_04cb33c0);
    FUN_02132f7c(PTR_DAT_04cb3390);
                    /* try { // try from 023370e0 to 02437103 has its CatchHandler @ 02337474 */
    bRam0000000004f9beae = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  Dino_BusSand_App_Meta_GiftPackFeature__EnsureInit_2235d04(param_1);
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)puVar1;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
    lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar5);
    puVar2 = PTR_DAT_04cb33a0;
    puVar1 = PTR_DAT_04cb3398;
                    /* try { // try from 02337120 to 0243712b has its CatchHandler @ 02337440 */
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_48,*(long *)(lVar3 + 0x10),*(undefined8 *)PTR_DAT_04cb33c0);
      while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_48,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
                    /* try { // try from 02337164 to 0243718b has its CatchHandler @ 0233744c */
        if ((lStack_38 != 0) && (*(char *)(lStack_38 + 0x30) != '\0')) {
          *(int *)(lStack_38 + 0x68) = *(int *)(lStack_38 + 0x68) + 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_48,*(undefined8 *)puVar1);
      Dino_BusSand_App_Meta_GiftPackFeature__RoundEnd_2236e8c(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

