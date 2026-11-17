/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$ResetSession
void Dino_BusSand_App_Meta_GiftPackFeature__ResetSession (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$ResetSession
   void Dino_BusSand_App_Meta_GiftPackFeature__ResetSession
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__ResetSession_2236570(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
                    /* try { // try from 02336580 to 024365a7 has its CatchHandler @ 023368f8 */
  if ((bRam0000000004f9bea9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3450);
    FUN_02132f7c(PTR_DAT_04cacd48);
    FUN_02132f7c(PTR_DAT_04cad858);
    bRam0000000004f9bea9 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x44) = 0;
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0x18);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (0 < iVar1) {
                    /* try { // try from 023365ec to 02436613 has its CatchHandler @ 023368fc */
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
      }
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 != 0) {
        iVar1 = *(int *)(lVar3 + 0x20);
        if (0 < iVar1) {
          lVar2 = *(long *)(lVar3 + 0x10);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224(0,*(undefined8 *)PTR_DAT_04cb3450);
          }
          System_Array__Clear_4851dc8(lVar2,0,*(undefined4 *)(lVar2 + 0x18),0);
          *(undefined4 *)(lVar3 + 0x28) = 0;
          *(undefined8 *)(lVar3 + 0x20) = 0xffffffff00000000;
          System_Array__Clear_4851dc8(*(undefined8 *)(lVar3 + 0x18),0,iVar1,0);
        }
        *(int *)(lVar3 + 0x2c) = *(int *)(lVar3 + 0x2c) + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

