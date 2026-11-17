/* IL2CPP: Dino.BusSand.Util$$OwnMaterial
UnityEngine_Material_o* Dino_BusSand_Util__OwnMaterial (TMPro_TMP_Text_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Util$$OwnMaterial
   UnityEngine_Material_o* Dino_BusSand_Util__OwnMaterial (TMPro_TMP_Text_o* t, const MethodInfo*
   method); */

undefined8 Dino_BusSand_Util__OwnMaterial_238db58(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000004f9c8b4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbee0);
    bRam0000000004f9c8b4 = 1;
  }
  puVar1 = PTR_DAT_04cbbee0;
  if (param_1 != 0) {
    uVar2 = TMPro_TMP_Text__get_fontMaterial_42cb8b0(param_1,0);
    uVar3 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    lVar4 = Dino_BusSand_Util__GetOrAdd_object__2958948(uVar3,*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x20) = uVar2;
      thunk_FUN_02134474((undefined8 *)(lVar4 + 0x20),uVar2);
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

