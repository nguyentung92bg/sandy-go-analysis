/* IL2CPP: Dino.BusSand.App.CrashContext$$ResetStatics
void Dino_BusSand_App_CrashContext__ResetStatics (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$ResetStatics
   void Dino_BusSand_App_CrashContext__ResetStatics (const MethodInfo* method); */

void Dino_BusSand_App_CrashContext__ResetStatics_21728d8(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar2 = PTR_DAT_04cac450;
  if ((bRam0000000004f9b8b0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacd28);
    FUN_02132f7c(PTR_DAT_04cacd30);
    FUN_02132f7c(PTR_DAT_04cacd38);
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cacd40);
    FUN_02132f7c(PTR_DAT_04cacd48);
    FUN_02132f7c(PTR_DAT_04cacd50);
    bRam0000000004f9b8b0 = 1;
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  **(undefined8 **)(lVar7 + 0xb8) = 0;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),0);
  lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (lVar7 != 0) {
                    /* try { // try from 0227299c to 0237299f has its CatchHandler @ 022729c4 */
    System_Collections_Generic_Dictionary_object__object___Clear_34b452c
              (lVar7,*(undefined8 *)PTR_DAT_04cacd40);
    lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    if (lVar7 != 0) {
      System_Collections_Generic_Queue_object___Clear_2ce38bc(lVar7,*(undefined8 *)PTR_DAT_04cacd50)
      ;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227299c with catch @ 022729c4
                        */
      lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
      lVar11 = *(long *)(lVar7 + 0x18);
      if (lVar11 != 0) {
        iVar1 = *(int *)(lVar11 + 0x18);
                    /* try { // try from 022729dc to 023729df has its CatchHandler @ 02272a04 */
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear_4851dc8(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
          lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
        }
        lVar7 = *(long *)(lVar7 + 0x20);
        if (lVar7 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022729dc with catch @ 02272a04
                        */
          iVar1 = *(int *)(lVar7 + 0x18);
          *(undefined4 *)(lVar7 + 0x18) = 0;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (0 < iVar1) {
                    /* try { // try from 02272a1c to 02372a1f has its CatchHandler @ 02272a44 */
            System_Array__Clear_4851dc8(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
          }
          if (cRam0000000004f9b947 == '\0') {
            FUN_02132f7c(PTR_DAT_04cac450);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02272a1c with catch @ 02272a44
                        */
            cRam0000000004f9b947 = '\x01';
          }
          puVar5 = PTR_DAT_04cacd38;
          puVar4 = PTR_DAT_04cacd30;
          puVar3 = PTR_DAT_04cacd28;
          lVar7 = *(long *)puVar2;
                    /* try { // try from 02272a5c to 02372a5f has its CatchHandler @ 02272a84 */
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar2;
          }
          puVar8 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x28);
          *puVar8 = 0;
          thunk_FUN_02134474(puVar8,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02272a5c with catch @ 02272a84
                        */
          uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* try { // try from 02272a9c to 02372a9f has its CatchHandler @ 02272ac4 */
          System_Action_object____ctor_35f0008(uVar9,0,*(undefined8 *)puVar5,0);
          Dino_BusSand_App_UI_UIManagerEvents__remove_Opened_21ffc80(uVar9,0);
          uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02272a9c with catch @ 02272ac4
                        */
          System_Action_object____ctor_35f0008(uVar9,0,*(undefined8 *)puVar4,0);
          puVar2 = PTR_DAT_04cb1b68;
                    /* try { // try from 02272adc to 02372adf has its CatchHandler @ 02272b04 */
          if ((bRam0000000004f9bc8b & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cacd28,0);
            FUN_02132f7c(PTR_DAT_04cb1b68);
            bRam0000000004f9bc8b = 1;
          }
          puVar3 = PTR_DAT_04cacd28;
          lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          do {
            lVar11 = System_Delegate__Remove_4872510(lVar7,uVar9,0);
            if (lVar11 == 0) {
              lVar10 = 0;
            }
            else {
              uVar12 = *(undefined8 *)puVar3;
              lVar10 = thunk_FUN_0216e7a0(lVar11,uVar12);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021335a4(lVar11,uVar12);
              }
            }
            lVar11 = FUN_0216aff4(*(long *)(*(long *)puVar2 + 0xb8) + 8,lVar10,lVar7);
            bVar6 = lVar11 != lVar7;
            lVar7 = lVar11;
          } while (bVar6);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

