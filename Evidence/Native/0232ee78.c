/* IL2CPP: Dino.BusSand.App.Meta.Ev07Rewards$$Name
System_String_o* Dino_BusSand_App_Meta_Ev07Rewards__Name (int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Ev07Rewards$$Name
   System_String_o* Dino_BusSand_App_Meta_Ev07Rewards__Name (int32_t index, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_Meta_Ev07Rewards__Name_222ee78(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000004f9be5e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf810);
    FUN_02132f7c(PTR_DAT_04caf770);
    bRam0000000004f9be5e = 1;
  }
  puVar4 = PTR_DAT_04caf810;
  puVar6 = (undefined8 *)PTR_DAT_04caf770;
  if (-1 < param_1) {
    lVar5 = *(long *)PTR_DAT_04caf810;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar4;
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar5 + 0x18);
    iVar3 = 0;
    if (uVar1 != 0) {
      iVar3 = param_1 / (int)uVar1;
    }
    uVar2 = param_1 - iVar3 * uVar1;
    if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    puVar6 = (undefined8 *)(lVar5 + (ulong)uVar2 * 8 + 0x20);
  }
  return *puVar6;
}

