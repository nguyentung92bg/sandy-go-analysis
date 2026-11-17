/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$Reset
void Dino_Tracking_CustomTrackingParameters__Reset (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$Reset
   void Dino_Tracking_CustomTrackingParameters__Reset (const MethodInfo* method); */

void Dino_Tracking_CustomTrackingParameters__Reset_247792c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar8 = PTR_DAT_04cc18d8;
  if ((bRam0000000004f9cedc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc18d8);
    FUN_02132f7c(PTR_DAT_04cc18e0);
    bRam0000000004f9cedc = 1;
  }
  lVar4 = *(long *)puVar8;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar8;
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (iVar1 < 1) {
      return;
    }
    puVar5 = *(undefined8 **)(lVar4 + 0x10);
    if (puVar5 == (undefined8 *)0x0) {
      thunk_FUN_021985a8(PTR_DAT_04cbe5c8,0,iVar1,0);
      uVar6 = thunk_FUN_0216e89c();
      uVar7 = thunk_FUN_021985a8(PTR_DAT_04cc29c8);
      System_ArgumentNullException___ctor_47afb54(uVar6,uVar7,0);
    }
    else {
      if (iVar1 < 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27d8,0,iVar1,0);
        uVar6 = thunk_FUN_0216e89c();
        puVar8 = PTR_DAT_04d13dc0;
      }
      else {
        iVar2 = FUN_02143bfc(puVar5,0);
        if (iVar2 < 1) {
          iVar3 = System_Array__get_Length_4848454(puVar5);
          if (-iVar2 <= iVar3 - iVar1) {
            iVar3 = il2cpp_array_element_size(*puVar5);
            (*(code *)PTR_memset_04d166b8)
                      ((long)puVar5 + (long)iVar3 * (long)-iVar2 + 0x20,0,(long)(iVar3 * iVar1));
            return;
          }
          thunk_FUN_021985a8(PTR_DAT_04cc27d8);
          uVar6 = thunk_FUN_0216e89c();
          puVar8 = PTR_DAT_04d13dd0;
        }
        else {
          thunk_FUN_021985a8(PTR_DAT_04cc27d8);
          uVar6 = thunk_FUN_0216e89c();
          puVar8 = PTR_DAT_04d13dc8;
        }
      }
      uVar7 = thunk_FUN_021985a8(puVar8);
      System_IndexOutOfRangeException___ctor_482b694(uVar6,uVar7,0);
    }
    uVar7 = thunk_FUN_021985a8(PTR_DAT_04d13dd8);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar6,uVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

