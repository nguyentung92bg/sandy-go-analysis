/* IL2CPP: Dino.BusSand.App.Meta.Segments$$RewardedPerDay
float Dino_BusSand_App_Meta_Segments__RewardedPerDay (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Segments$$RewardedPerDay
   float Dino_BusSand_App_Meta_Segments__RewardedPerDay (const MethodInfo* method); */

float Dino_BusSand_App_Meta_Segments__RewardedPerDay_220f4b4(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd33 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1cc8);
    FUN_02132f7c(PTR_DAT_04cb2238);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd33 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  fVar7 = 0.0;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x170), lVar3 != 0)) &&
     (iVar5 = *(int *)(lVar3 + 0x18), iVar5 != 0)) {
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac(0);
    }
    iVar2 = System_Math__Min_4831118(3,iVar5,0);
    puVar1 = PTR_DAT_04cb2238;
    fVar7 = 0.0;
    iVar5 = *(int *)(lVar3 + 0x18) - iVar2;
    if (iVar5 < *(int *)(lVar3 + 0x18)) {
      lVar6 = 0;
      do {
        lVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar3,iVar5,*(undefined8 *)puVar1);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        iVar5 = iVar5 + 1;
        lVar6 = *(long *)(lVar4 + 0x18) + lVar6;
      } while (iVar5 < *(int *)(lVar3 + 0x18));
      fVar7 = (float)lVar6;
    }
    fVar7 = fVar7 / (float)iVar2;
  }
  return fVar7;
}

